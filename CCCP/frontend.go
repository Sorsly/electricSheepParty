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
	Ready       bool
	Alldead     bool
	Status      []int
	Fires       []bool
	Dturretposs []uint64
	Ids         []int
	Paths       [][]struct {
		X float64
		Y float64
		Z float64
	}
}
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

//Outputs the data from the cv buffer
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

//Makes the buffer
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
func numtoportstr(port int) string {
	return ":" + strconv.Itoa(port)
}

func (fe *FrontEnd) loadFERaw(raw []byte) {
	var decoded FEPacket
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

//Function to serve the data
func (ch *datawrite) APIserve(w http.ResponseWriter, r *http.Request) {
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

/*func main() {

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
}*/
