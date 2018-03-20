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
const OUTPORT = "1917"
const CAMPORT = "1918"

func main() {
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
	for _, sheep := range sheeps {
		sheep.commands.sheepF |= SHEEPRST
		sheep.commands.sheepF |= SHEEPLIGHT
		sheep.sendCommands(outServerAddr)

		wait := time.NewTimer(time.Millisecond * 100)
		<-wait.C

		ids, xs, ys := cam.getPos()
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
	for gamedone == false {
		//DO FRONT END COMMUNICATION STUFF (HERE IS WHERE GAMEDONE IS CHECKED)
		ids, xs, ys := cam.getPos()
		for i, id := range ids {
			sheep,found := camToIdx[id]
			if found {
				sheep.currX = xs[i]
				sheep.currY = ys[i]
			}
		}

		//FIND OUT THE PATH EVERYONE IS TAKING
		datawrite.FE1.UpdateGndBots(sheeps, false, false)

		//BREAK PATH INTO COMMANDS
		commandwg.Add(NUMBOTS)
		for _, sheep := range sheeps {
			go sheep.recState(&commandwg)
			wait := time.NewTimer(time.Nanosecond * 500)
			<-wait.C
			sheep.sendCommands(outServerAddr)
		}
		commandwg.Wait()
		log.Print(sheeps[0])

	}

	log.Println("GAME COMPLETE")
}
