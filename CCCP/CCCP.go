//CCCP stands for Central Computation and Control Processor. It handles unifying the state of the
//Game between the two front ends and all of the bots on the field
package main

import (
	"log"
	"net"
	"net/http"
	"runtime"
	"sync"
	"time"
	"math"
)

const NUMBOTS = 1 //Number of bots in the game
const LENGTHFIELD = 19000 // How long the field actually is in terms of millimeters
const OUTPORT = "1917" // The port the bots will recieve commands from
const CAMPORT = "1918" //The port the camera will send its data down
const REPROGRAMON = true

//Running main process
func main_full() {
	var servoangle int
	servoangle = 120
	ratespin := 0

	runtime.GOMAXPROCS(10)
	//Loads all the IP addresses of FEs, CCCP, and bots
	ips := getConfig("ips.txt")
	host := ips.Cpu
	log.Println(host)
	//This is the starting port for the sheeps response
	inportstart := 2000
	var commandwg sync.WaitGroup

	// String to communicate out with bots
	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(host, OUTPORT))
	CheckError(err)

	//Initializing camera
	cam := initcamera(NUMBOTS, CAMPORT)

	//Initializing idhash. used to get a certain sheep object from an id
	camToIdx := make(map[uint64]*Sheep)

	//Initializing sheep connections
	sheeps := make([]*Sheep, len(ips.Bot))
	for i, ip := range ips.Bot {
		sheeps[i] = initsheep(ip, host, uint16(inportstart+i))
		sheeps[i].commands.sheepF &= 0xEF
	}

	if REPROGRAMON {
		for _, sheep := range sheeps {
			sheep.commands.sheepF = SHEEPREPROGRAM
			sheep.sendCommands(outServerAddr)
			sheep.commands.sheepF &= 0xBF
		}
		wait := time.NewTimer(10*time.Second)
		<-wait.C
	}
	//IDing process. How it works is that for each sheep, its light is turned on, a moment is waited
	//And then the position of all the bots is found. All the id's found are then iterated over, and if
	//the new id which would have popped up is then found. That sheep is marked as at that position,
	//And the sheep is then loaded into the camera id hash
	for _, sheep := range sheeps {
		found := false
		sheep.commands.sheepF |= SHEEPRST
		sheep.commands.sheepF |= SHEEPLIGHT
		sheep.sendCommands(outServerAddr)

		wait := time.NewTimer(time.Second)
		<-wait.C

		ids, xs, ys,orients := cam.getPos(65536)
		log.Println("IDing ids",ids)
		for idx,id := range ids {
			_, inHash := camToIdx[id]
			if !inHash {
				sheep.currX = xs[idx]
				sheep.currY = ys[idx]
				sheep.pathhead.X = float64(sheep.currX)
				sheep.pathhead.Y = float64(sheep.currY)
				sheep.commands.camOrient = uint16(orients[idx])
				camToIdx[id] = sheep
				found = true
				break
			}
		}
		if !found {
			panic("SHEEP NOT FOUND IN INITIALIZATION PROCESS")
		}else{
			sheep.sendCommands(outServerAddr)
			sheep.commands.sheepF &= 0xFE
		}
	}

	//Initializing Frontend Server
	datawrite := MkChanDataWrite(100, NUMBOTS,sheeps)
	//Setup server for the unity to make put requests too
	http.HandleFunc("/", http.HandlerFunc(datawrite.APIserve))
	go http.ListenAndServe(numtoportstr(80), nil)

	gamedone := false
	fire := false
	top := true
	dir := 1
	log.Println("Entering Game")
	log.Println(camToIdx)
	for gamedone == false {

		//Update the position of all of the bots
		ids, xs, ys,orients := cam.getPos(LENGTHFIELD)
		for i, id := range ids {
			sheep,found := camToIdx[id]
			if found {
				sheep.currX = xs[i]
				sheep.currY = ys[i]
				sheep.commands.camOrient = uint16(orients[i])
				log.Println("SheepPos:",sheep.currX,sheep.currY)
			}
		}
		//Using these updated positions, update the frontend interface to reflect that
		datawrite.FE1.UpdateGndBots(sheeps, false, false)

		ratespin += 1
		if ratespin % 10 == 0 {
			servoangle += dir
			if servoangle%180 == 0 {
				dir = -dir
			}
		}
		//using the frontend commands, prepare the command structure for each sheep
		for _, sheep := range sheeps{
			pat, _, _, turretAngl,_ := datawrite.frInfo(sheep)
			turretAngl = uint64(servoangle)
			//Set servo angle
			sheep.commands.servoAngle = uint8(turretAngl)
			//Fire or don't fire
			if fire {
				sheep.commands.sheepF |= SHEEPFIRE
			}else{
				sheep.commands.sheepF &= 0xF7
			}
			if top {
				sheep.commands.sheepF |= SHEEPLIGHT
			}else{
				sheep.commands.sheepF &= 0xEF
			}
			//Get next point to travel too
			next := getNextPoint(sheep,pat,50)
			//next.X = 250
			//next.Y = 250
			dist := euclidDist(next.X, float64(sheep.currX),next.Y, float64(sheep.currY))

			sheep.commands.relDesY = int16(next.Y - float64(sheep.currY))
			sheep.commands.relDesX = int16(next.X - float64(sheep.currX))
			des_angle :=math.Atan2(-float64(sheep.commands.relDesY),float64(sheep.commands.relDesX))*180/3.141
			if des_angle < 0{
				des_angle += 360
			}
			log.Println("Dist: ",dist)
			log.Println("Next: ",next)
			log.Println("SheepHealth: ",sheep.resp.health)
			log.Println("Sheep Pos:",sheep.currX,sheep.currY)
			log.Println("Sheep Orient:",sheep.commands.camOrient)
			log.Println("Trying To get to: ", sheep.commands.relDesX, sheep.commands.relDesY)
			log.Println( "Sheep Err Angle: ",sheep.resp.orient)
			log.Println( "Sheep Err Angle: ",sheep.resp.health)
			log.Println("Path: ",pat)
			log.Println("PathHead: ",sheep.pathhead)
		}


		//Send those commands down to the bots. this is done in a burst of threads
		commandwg.Add(NUMBOTS)
		for _, sheep := range sheeps {
			go sheep.recState(&commandwg)
			wait := time.NewTimer(time.Nanosecond * 500)
			<-wait.C
			sheep.sendCommands(outServerAddr)
		}
		//Wait until all of the bots respond
		wait := time.NewTimer(time.Millisecond*50)
		<-wait.C
		commandwg.Wait()

		//panic("Done")
	}

	log.Println("GAME COMPLETE")
}

//Code to test the frontend
func main_frontend() {

	//Initializing sheep connections
	sheeps := make([]*Sheep, 1)
	for i := 0; i < 1; i += 1 {
		sheeps[i] = initsheep("localhost", "localhost", uint16(1000))
	}
	datawrite := MkChanDataWrite(100, NUMBOTS,sheeps)
	http.HandleFunc("/", http.HandlerFunc(datawrite.APIserve))
	go http.ListenAndServe(numtoportstr(80), nil)
	sheeps[0].currX = 1
	sheeps[0].currY = 1

	for {
		sheeps[0].commands.servoAngle += 1
		if sheeps[0].commands.servoAngle == 180{
			sheeps[0].commands.servoAngle = 0
		}
		datawrite.FE1.UpdateGndBots(sheeps, false, false)
		log.Println("updoot")
		wait := time.NewTimer(time.Second)
		<-wait.C
	}
}
//Code to test the camera
func main_camera() {
	cam := initcamera(5, "1918")
	for {
		log.Println(cam.getPos(LENGTHFIELD))
	}
}

func main(){
	// This works and strip "/static/" fragment from path
	main_full()
	//main_camera()
	//main_frontend()
}
