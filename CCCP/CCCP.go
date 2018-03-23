package main

import (
	"log"
	"net"
	"net/http"
	"runtime"
	"sync"
	"time"
)

const NUMBOTS = 1
const LENGTHFIELD = 4000
const OUTPORT = "1917"
const CAMPORT = "1918"

func main_full() {
	runtime.GOMAXPROCS(10)
	ips := getConfig("ips.txt")
	host := ips.Cpu
	log.Println(host)
	inportstart := 2000
	var commandwg sync.WaitGroup

	// String to communicate out with bots
	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(host, OUTPORT))
	CheckError(err)

	//Initializing camera
	cam := initcamera(NUMBOTS, CAMPORT)

	//Initializing idhash
	camToIdx :=make(map[uint64]*Sheep)

	//Initializing sheep connections
	sheeps := make([]*Sheep, len(ips.Bot))
	for i, ip := range ips.Bot {
		sheeps[i] = initsheep(ip, host, uint16(inportstart+i))
	}

	//IDing process
	log.Println("Sheeps:",sheeps)
	for _, sheep := range sheeps {
		sheep.commands.sheepF |= SHEEPRST
		sheep.commands.sheepF |= SHEEPLIGHT
		sheep.sendCommands(outServerAddr)

		wait := time.NewTimer(time.Millisecond * 100)
		<-wait.C

		ids, xs, ys := cam.getPos(LENGTHFIELD)
		log.Println("IDS:",ids)
		for idx,id := range ids {
			_, inHash := camToIdx[id]
			if !inHash {
				sheep.currX = xs[idx]
				sheep.currY = ys[idx]
				camToIdx[id] = sheep
				break
			}
		}
	}

	//Initializing Frontend Server
	datawrite := MkChanDataWrite(100, 5,sheeps)
	http.HandleFunc("/", http.HandlerFunc(datawrite.APIserve))
	go http.ListenAndServe(numtoportstr(80), nil)

	gamedone := false
	log.Println("Entering Game")
	for gamedone == false {
		log.Println("Game Step")
		//DO FRONT END COMMUNICATION STUFF (HERE IS WHERE GAMEDONE IS CHECKED)
		ids, xs, ys := cam.getPos(LENGTHFIELD)
		for i, id := range ids {
			sheep,found := camToIdx[id]
			if found {
				sheep.currX = xs[i]
				sheep.currY = ys[i]
			}
		}
		datawrite.FE1.UpdateGndBots(sheeps, false, false)

		//FIND OUT THE PATH EVERYONE IS TAKING
		for _, sheep := range sheeps{
			pat, patstat, fire, turretAngl := datawrite.frInfo(sheep)
			sheep.commands.servoAngle = uint8(turretAngl)
			if fire {
				sheep.commands.sheepF |= SHEEPFIRE
			}else{
				sheep.commands.sheepF &= 0xF7
			}
			log.Printf("Path Status %v\n",patstat)
			next := getNextPoint(*sheep,pat,10)

			sheep.commands.relDesY = getTrueMag(next.Y - float64(sheep.currY))
			sheep.commands.relDesX = getTrueMag(next.X - float64(sheep.currX))
		}

		//BREAK PATH INTO COMMANDS

		commandwg.Add(NUMBOTS)
		for _, sheep := range sheeps {
			go sheep.recState(&commandwg)
			wait := time.NewTimer(time.Nanosecond * 500)
			<-wait.C
			sheep.sendCommands(outServerAddr)
		}
		commandwg.Wait()

	}

	log.Println("GAME COMPLETE")
}

func main_frontend() {

	//Initializing sheep connections
	sheeps := make([]*Sheep, 2)
	for i := 0; i < 2; i += 1 {
		sheeps[i] = initsheep("localhost", "localhost", uint16(1000))
	}
	datawrite := MkChanDataWrite(100, 2,sheeps)
	http.HandleFunc("/", http.HandlerFunc(datawrite.APIserve))
	go http.ListenAndServe(numtoportstr(80), nil)
	sheeps[0].currX = 1
	sheeps[0].currY = 1
	sheeps[1].currX = 10
	sheeps[1].currY = 10

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
func main_camera() {
	cam := initcamera(5, "1918")
	for {
		log.Println(cam.getPos(LENGTHFIELD))
	}
}

func main(){
	main_camera()
}