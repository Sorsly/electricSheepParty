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
	"time"
	"strings"
)

type FEPacket struct {
	//The front end is ready to play
	Ready1       bool
	Ready2       bool
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
type APIPacket struct {
	AssignedBots []int
	Gamestatus   string
	Numbots		 int
}
//Node in a path
type Path struct {
	X float64
	Y float64
}
//The CV data buffer
type FrontEnd struct {
	numbots uint8
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
	frFE    struct {
		ready   bool
		alldead bool
		pathlengthmax int
		path    [][]Path
		pathStatus []int
		fire       []bool
		turretReq  []uint64
	}
}

//The streamer
type datawrite struct {
	FE FrontEnd
	FEIPs map[string]bool
	gamestart bool
	// 0 No winner
	// 1 Player 1 has won
	// 2 Player 2 has won
	gamestatus int
	numcheckins  int
}

//for a certain sheep, give the desired commands for that sheep
func (da * datawrite) frInfo(sh * Sheep)([]Path,int,bool,uint64,bool){
	idx := da.FE.camToFEID[sh]
	return da.FE.frFE.path[idx], da.FE.frFE.pathStatus[idx], da.FE.frFE.fire[idx],da.FE.frFE.turretReq[idx], da.FE.frFE.ready
}
func check(e error) {
	if e != nil {
		log.Println(e)
	}
}

//This takes in the sheep and game state and updates the datastructure which is sent to the frontend
func (buff *FrontEnd) UpdateGndBots(sheeps []*Sheep, init bool, gamestart bool) {

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
	buf.frFE.pathlengthmax = pathlength
	for i := 0; i < int(numbots); i += 1 {
		buf.frFE.path[i] = make([]Path, pathlength)
	}

	return buf
}

//Makes the stream
func MkChanDataWrite(feips []string, botcnt uint8, sheeps []*Sheep) (writer datawrite) {
	writer.FE = MkFrontEnd(botcnt, 20,sheeps)
	writer.gamestart = false
	writer.FEIPs = make(map[string]bool)
	for _,ip := range feips{
		writer.FEIPs[ip] = true
	}
	writer.gamestatus = 0
	writer.numcheckins = 0
	return
}
//util function
func numtoportstr(port int) string {
	return ":" + strconv.Itoa(port)
}

//Takes the raw request body from the frontend and parses it into the command structure for each id
func (fe *FrontEnd) loadFERaw(raw []byte) {
	var decoded FEPacket
	if len(raw) == 0{
		return
	}
	pathsteps := 0
	err := json.Unmarshal(raw, &decoded)
	check(err)
	fe.frFE.ready = decoded.Ready1
	fe.frFE.alldead = decoded.Alldead
	for idx, id := range decoded.Ids {
		fe.frFE.pathStatus[id] = decoded.Status[idx]
		fe.frFE.fire[id] = decoded.Fires[idx]
		fe.frFE.turretReq[id] = decoded.Dturretposs[idx]
		for step, node := range decoded.Paths[idx] {
			fe.frFE.path[id][step].X = node.X
			fe.frFE.path[id][step].Y = node.Z
			pathsteps += 1
		}
		for pathsteps < fe.frFE.pathlengthmax{
			fe.frFE.path[id][pathsteps].X = 0
			fe.frFE.path[id][pathsteps].Y = 0
			pathsteps += 1
		}
	}
}

//Function to serve the data as a server, ba dum chi
func (ch *datawrite) Botctrlserve(w http.ResponseWriter, r *http.Request) {
	w.Header().Set("Access-Control-Allow-Credentials", "true")
	w.Header().Set("Access-Control-Allow-Headers", "Accept, X-Access-Token, X-Application-Name, X-Request-Sent-Time, Content-Type")
	w.Header().Set("Access-Control-Allow-Methods",  "GET, POST, OPTIONS, PUT")
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.WriteHeader(http.StatusOK)
	defer r.Body.Close()
	rawBody, err := ioutil.ReadAll(r.Body)
	go ch.FE.loadFERaw(rawBody)
	check(err)
	_, data := ch.FE.Dump()
	_, err = w.Write(data)
	check(err)
	//Give time for the mutex to unlactch. not the most elegant thing
	wait := time.NewTimer(time.Nanosecond * 1000)
	<-wait.C
}


func (ch *datawrite) APIServe(w http.ResponseWriter, r *http.Request) {
	w.Header().Set("Access-Control-Allow-Credentials", "true")
	w.Header().Set("Access-Control-Allow-Headers", "Accept, X-Access-Token, X-Application-Name, X-Request-Sent-Time, Content-Type")
	w.Header().Set("Access-Control-Allow-Methods",  "GET, POST, OPTIONS, PUT")
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.Header().Set("Content-Type", "application/json")
	w.WriteHeader(http.StatusOK)
	defer r.Body.Close()
	var retPkt APIPacket
	_ =strings.Split(r.RemoteAddr,":")[0]
	log.Println("API Request IP from: ",r.RemoteAddr)
	var onleft bool
	if ch.numcheckins == 0 {
		retPkt.Gamestatus = "0"
		onleft = true
		ch.gamestart = true
	}else if ch.numcheckins == 1{
		retPkt.Gamestatus = "1"
		onleft = false
		ch.gamestart = true
	}else {
		retPkt.Numbots = NUMBOTS
		retPkt.AssignedBots = nil
		retPkt.Gamestatus = "2"
		retBytes, err := json.Marshal(retPkt)
		check(err)
		_, err = w.Write(retBytes)
		check(err)
		return
	}
	for sheep,idx := range ch.FE.camToFEID{
		if onleft && sheep.currX < PXWIDTH/2{
			retPkt.AssignedBots = append(retPkt.AssignedBots, idx)
		}
		if !onleft && sheep.currX > PXWIDTH/2{
			retPkt.AssignedBots = append(retPkt.AssignedBots, idx)
		}
	}
	ch.numcheckins += 1
	retPkt.Numbots = NUMBOTS
	log.Println(retPkt)
	retBytes, err := json.Marshal(retPkt)
	check(err)
	_, err = w.Write(retBytes)
	check(err)
}

