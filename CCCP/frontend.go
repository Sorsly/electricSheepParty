/*
Frontend is the interface for communicating with the frontends, recieveing commands, and preparing the
game state in a way the frontend can parse and display

 */

package main

import (
	"encoding/binary"
	"encoding/json"
	"io/ioutil"
	"log"
	"net/http"
	"strconv"
	"sync"
	"time"
)

type FEPacket struct {
	//The front end is ready to play
	Ready       bool
	//All of the frontend is dead
	Alldead     bool
	//Status of the front ends path for each bot
	Status      []int
	//Which bots should fire
	Fires       []bool
	//Desired position of the turret
	Dturretposs []uint64
	//All the IDs of the bots, in integers
	Ids         []int
	Paths       [][]struct {
		X float64
		Y float64
		Z float64
	}
}
//Node in a path
type Path struct {
	X float64
	Y float64
}
//The CV data buffer
type FrontEnd struct {
	numbots uint8
	toFEmtx sync.Mutex
	camToFEID map[*Sheep]int
	toFE    struct {
		//FEflags b0 = init
		//FEflags b1 = gamestart
		FEflags   uint8
		xPos      []uint64
		yPos      []uint64
		turretPos []uint64
		orient    []uint64
		health    []uint64
	}
	feFEmtx sync.Mutex
	frFE    struct {
		ready   bool
		alldead bool
		path    [][]Path
		pathStatus []int
		fire       []bool
		turretReq  []uint64
	}
}

//The streamer
type datawrite struct {
	FE1 FrontEnd
}

//for a certain sheep, give the desired commands for that sheep
func (da * datawrite) frInfo(sh * Sheep)([]Path,int,bool,uint64){
	idx := da.FE1.camToFEID[sh]
	da.FE1.feFEmtx.Lock()
	defer da.FE1.feFEmtx.Unlock()
	return da.FE1.frFE.path[idx], da.FE1.frFE.pathStatus[idx], da.FE1.frFE.fire[idx],da.FE1.frFE.turretReq[idx]
}
func check(e error) {
	if e != nil {
		log.Println(e)
	}
}

//This takes in the sheep and game state and updates the datastructure which is sent to the frontend
func (buff *FrontEnd) UpdateGndBots(sheeps []*Sheep, init bool, gamestart bool) {
	buff.toFEmtx.Lock()
	defer buff.toFEmtx.Unlock()

	if init {
		buff.toFE.FEflags |= 0x01
	} else {
		buff.toFE.FEflags &= 0xFE
	}

	if gamestart {
		buff.toFE.FEflags |= 0x02
	} else {
		buff.toFE.FEflags &= 0xFD
	}
	for _, sheep := range sheeps {
		FEidx := buff.camToFEID[sheep]
		buff.toFE.xPos[FEidx] = sheep.currX
		buff.toFE.yPos[FEidx] = sheep.currY
		buff.toFE.turretPos[FEidx] = uint64(sheep.commands.servoAngle)
		buff.toFE.orient[FEidx] = uint64(sheep.resp.orient)*360/255
		buff.toFE.health[FEidx] = uint64(sheep.resp.health)
	}
}

//Takes the frontend data and loads it into a big byte array, for sending as a response body to the frontend
func (buff *FrontEnd) Dump() (read int, img []byte) {
	datasize := 40*buff.numbots + 2
	buff.toFEmtx.Lock()
	defer buff.toFEmtx.Unlock()
	msg := make([]byte, datasize)
	indx := 0

	msg[0] = buff.numbots
	msg[1] = buff.toFE.FEflags
	indx += 2

	for _, val := range buff.toFE.xPos {
		binary.LittleEndian.PutUint64(msg[indx:], val)
		indx += 8
	}
	for _, val := range buff.toFE.yPos {
		binary.LittleEndian.PutUint64(msg[indx:], val)
		indx += 8
	}
	for _, val := range buff.toFE.turretPos {
		binary.LittleEndian.PutUint64(msg[indx:], val)
		indx += 8
	}
	for _, val := range buff.toFE.orient {
		binary.LittleEndian.PutUint64(msg[indx:], val)
		indx += 8
	}
	for _, val := range buff.toFE.health {
		binary.LittleEndian.PutUint64(msg[indx:], val)
		indx += 8
	}

	return indx, msg

}

//Makes the frontend buffer
func MkFrontEnd(numbots uint8, pathlength int, sheeps []*Sheep) (buf FrontEnd) {
	buf.numbots = numbots
	buf.camToFEID = make(map[*Sheep]int)
	for idx,sheep := range sheeps {
		buf.camToFEID[sheep] = idx
	}
	buf.toFE.FEflags = 0
	buf.toFE.xPos = make([]uint64, numbots)
	buf.toFE.yPos = make([]uint64, numbots)
	buf.toFE.turretPos = make([]uint64, numbots)
	buf.toFE.orient = make([]uint64, numbots)
	buf.toFE.health = make([]uint64, numbots)

	buf.frFE.pathStatus = make([]int, numbots)
	buf.frFE.fire = make([]bool, numbots)
	buf.frFE.turretReq = make([]uint64, numbots)
	buf.frFE.path = make([][]Path, numbots)
	for i := 0; i < int(numbots); i += 1 {
		buf.frFE.path[i] = make([]Path, pathlength)
	}

	return buf
}

//Makes the stream
func MkChanDataWrite(datalen int, botcnt uint8, sheeps []*Sheep) (writer datawrite) {
	writer.FE1 = MkFrontEnd(botcnt, 20,sheeps)
	return
}
//util function
func numtoportstr(port int) string {
	return ":" + strconv.Itoa(port)
}

//Takes the raw request body from the frontend and parses it into the command structure for each id
func (fe *FrontEnd) loadFERaw(raw []byte) {
	var decoded FEPacket
	log.Println(raw)
	if len(raw) == 0{
		return
	}
	err := json.Unmarshal(raw, &decoded)
	check(err)
	fe.feFEmtx.Lock()
	defer fe.feFEmtx.Unlock()
	fe.frFE.ready = decoded.Ready
	fe.frFE.alldead = decoded.Alldead
	for idx, id := range decoded.Ids {
		fe.frFE.pathStatus[id] = decoded.Status[idx]
		fe.frFE.fire[id] = decoded.Fires[idx]
		fe.frFE.turretReq[id] = decoded.Dturretposs[idx]
		for step, node := range decoded.Paths[idx] {
			fe.frFE.path[id][step].X = node.X
			fe.frFE.path[id][step].Y = node.Z
		}
	}
        log.Println(fe.frFE)
}

//Function to serve the data as a server, ba dum chi
func (ch *datawrite) APIserve(w http.ResponseWriter, r *http.Request) {
	log.Println("Client connected")
	w.Header().Set("Access-Control-Allow-Credentials", "true")
	w.Header().Set("Access-Control-Allow-Headers", "Accept, X-Access-Token, X-Application-Name, X-Request-Sent-Time, Content-Type")
	w.Header().Set("Access-Control-Allow-Methods",  "GET, POST, OPTIONS, PUT")
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.WriteHeader(http.StatusOK)
	defer r.Body.Close()
	rawBody, err := ioutil.ReadAll(r.Body)
	go ch.FE1.loadFERaw(rawBody)
	check(err)
	_, data := ch.FE1.Dump()
	_, err = w.Write(data)
	check(err)
	//Give time for the mutex to unlactch. not the most elegant thing
	wait := time.NewTimer(time.Nanosecond * 1000)
	<-wait.C
}


