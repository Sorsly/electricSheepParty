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

//The CV data buffer
type FrontEnd struct {
	numbots uint8
	toFEmtx sync.Mutex
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
		path    [][]struct {
			X float64
			Y float64
		}
		pathStatus []int
		fire       []bool
		turretReq  []uint64
	}
}

//The streamer
type datawrite struct {
	FE1 FrontEnd
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
		buff.toFE.xPos[sheep.idnum] = sheep.currX
		buff.toFE.yPos[sheep.idnum] = sheep.currY
		buff.toFE.turretPos[sheep.idnum] = uint64(sheep.commands.servoAngle)
		buff.toFE.orient[sheep.idnum] = uint64(sheep.resp.orient)
		buff.toFE.health[sheep.idnum] = uint64(sheep.resp.health)
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
func MkFrontEnd(numbots uint8, pathlength int) (buf FrontEnd) {
	buf.numbots = numbots
	buf.toFE.FEflags = 0
	buf.toFE.xPos = make([]uint64, numbots)
	buf.toFE.yPos = make([]uint64, numbots)
	buf.toFE.turretPos = make([]uint64, numbots)
	buf.toFE.orient = make([]uint64, numbots)
	buf.toFE.health = make([]uint64, numbots)

	buf.frFE.pathStatus = make([]int, numbots)
	buf.frFE.fire = make([]bool, numbots)
	buf.frFE.turretReq = make([]uint64, numbots)
	buf.frFE.path = make([][]struct {
		X float64
		Y float64
	}, numbots)
	for i := 0; i < int(numbots); i += 1 {
		buf.frFE.path[i] = make([]struct {
			X float64
			Y float64
		}, pathlength)
	}

	return buf
}

//Makes the stream
func MkChanDataWrite(datalen int, botcnt uint8) (writer datawrite) {
	writer.FE1 = MkFrontEnd(botcnt, 20)
	return
}
func numtoportstr(port int) string {
	return ":" + strconv.Itoa(port)
}

func (fe *FrontEnd) loadFERaw(raw []byte) {
	var decoded FEPacket
	err := json.Unmarshal(raw, &decoded)
	check(err)
	log.Println(decoded)
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
	datawrite := MkChanDataWrite(100, 5)
	http.HandleFunc("/", http.HandlerFunc(datawrite.APIserve))
	go http.ListenAndServe(numtoportstr(80), nil)

	//Initializing sheep connections
	sheeps := make([]*Sheep, 5)
	for i := 0; i < 5; i += 1 {
		sheeps[i] = initsheep("localhost", "localhost", uint16(1000))
		sheeps[i].idnum = i
	}

	for {
		sheeps[0].currX += 1
		sheeps[0].currY += 1
		datawrite.FE1.UpdateGndBots(sheeps, false, false)
		log.Println("updoot")
		wait := time.NewTimer(time.Second)
		<-wait.C
	}
}*/
