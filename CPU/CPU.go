package main

import (
	"fmt"
	"net"
	"time"
	"os"
	"encoding/json"
	"log"
)
type Config struct {
	All [] string `json:"all"`
	Cpu string `json:"cpu"`
	Cam [] string `json:"cam"`
	Bot [] string `json:"bot"`
	Fes [] string `json:"fes"`
}

const NUMBOTS = 6
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
	ips := getConfig("ips.txt")
	host := ips.Cpu
	log.Println(host)
	inportstart := 200

	// String to communicate out with bots
	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(host, OUTPORT))
	CheckError(err)

	//Initializing camera
	cam := initcamera(NUMBOTS)

	//Initializing sheep connections
	sheeps := make([] * Sheep, len(ips.Bot))
	for i,ip := range ips.Bot {
		sheeps[i] = initsheep(ip, uint8(inportstart+i))
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
	for gamedone == false{
		//DO FRONT END COMMUNICATION STUFF (HERE IS WHERE GAMEDONE IS CHECKED)
		ids,xs,ys := cam.getPos()
		for i,sheep := range sheeps {
			sheep.currX = xs[i]
			sheep.currY = ys[i]
			if sheep.idnum != ids[i]{
				panic("IDS ARE CHANGING ORDER")
			}
		}

		//FIND OUT THE PATH EVERYONE IS TAKING

		//BREAK PATH INTO COMMANDS

		for _,sheep := range sheeps {
			sheep.sendCommands(outServerAddr)
		}
	}

	log.Println("GAME COMPLETE")
}
