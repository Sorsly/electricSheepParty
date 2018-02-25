package main

import (
	"fmt"
	"net"
	"time"
	"os"
	"encoding/json"
	"runtime"
	"log"
	"sync"
)
type Config struct {
	All [] string `json:"all"`
	Cpu string `json:"cpu"`
	Cam [] string `json:"cam"`
	Bot [] string `json:"bot"`
	Fes [] string `json:"fes"`
}

const NUMBOTS = 1
const OUTPORT = "1917"

func CheckError(err error) {
    if err  != nil {
	    fmt.Println("Error: " , err)
    }
}

func getConfig(file string) Config {
	var config Config
	configFile, err := os.Open(file)
	defer configFile.Close()
	CheckError(err)
	jsonParser := json.NewDecoder(configFile)
	jsonParser.Decode(&config)
	return config
}

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
	cam := initcamera(NUMBOTS)

	//Initializing sheep connections
	sheeps := make([] * Sheep, len(ips.Bot))
	for i,ip := range ips.Bot {
		sheeps[i] = initsheep(ip, uint16(inportstart+i))
	}

	//IDing process
	for i,sheep := range sheeps {
		sheep.commands.sheepF |= SHEEPRST
		sheep.commands.sheepF |= SHEEPLIGHT
		sheep.sendCommands(outServerAddr)

		wait := time.NewTimer(time.Millisecond * 100)
		<-wait.C

		ids,xs,ys := cam.getPos()
		sheep.idnum = ids[i]
		sheep.currX = xs[i]
		sheep.currY = ys[i]
	}


	//DO FRONT END COMMUNICATION STUFF
	gamedone := false
	for gamedone == false {
		//DO FRONT END COMMUNICATION STUFF (HERE IS WHERE GAMEDONE IS CHECKED)
		ids,xs,ys := cam.getPos()
		for i,sheep := range sheeps {
			sheep.currX = xs[i]
			sheep.currY = ys[i]
			if sheep.idnum != ids[i] {
				panic("IDS ARE CHANGING ORDER")
			}
		}

		//FIND OUT THE PATH EVERYONE IS TAKING

		//BREAK PATH INTO COMMANDS
		commandwg.Add(NUMBOTS)
		for _,sheep := range sheeps {
			log.Print("Launching Sheep")
			go sheep.recState(&commandwg)
			wait := time.NewTimer(time.Nanosecond * 500)
			<-wait.C
			sheep.sendCommands(outServerAddr)
		}
		log.Print("Waiting")
		commandwg.Wait()
		log.Print("Done Waiting")

	}

	log.Println("GAME COMPLETE")
}
