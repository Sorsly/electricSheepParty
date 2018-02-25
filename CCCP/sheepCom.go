package main

import (
	"net"
	"fmt"
	"strconv"

	"sync"
	"encoding/binary"
	"time"
	"log"
)
const SHEEPRST = 0x01
const SHEEPDIR1 = 0x02
const SHEEPDIR2 = 0x04
const SHEEPFIRE = 0x08
const SHEEPLIGHT = 0x10

type Sheep struct {
	idnum int
	endpoint * net.UDPAddr
	resppoint * net.UDPAddr
	currX int
	currY int
	commands struct {
		sheepF uint8
		// sheepF b0 = rst
		// sheepF b1 = dir1
		// sheepF b2 = dir2
		// sheepF b3 = fire
		// sheepF b4 = lightOn
		duty_cycle1 uint8
		tOn1 uint8
		duty_cycle2 uint8
		tOn2 uint8
		servoAngle uint8
		portAssign uint16
	}
	resp struct {
		health uint8
		accelX uint8
		accelY uint8
		orient uint8
		battery uint8
	}
}

func (s * Sheep)String() string{
	return fmt.Sprintf("ID: %v\nAddr: %v Port: %v\nResp: %v\n",s.idnum,s.endpoint,s.commands.portAssign,s.resp)
}

func initsheep(ipAdd string, hostip string, respPort uint16)( * Sheep){
//	ipAdd = "localhost"
	s := new(Sheep)
	s.idnum = -1
	s.currX = -1
	s.currY = -1

	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(ipAdd,"1917"))
	CheckError(err)
	respServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(hostip,strconv.Itoa(int(respPort))))
	CheckError(err)

	s.endpoint = outServerAddr
	s.resppoint = respServerAddr

	s.commands.sheepF = 0
	s.commands.duty_cycle1 = 0
	s.commands.tOn1 = 0
	s.commands.duty_cycle2 = 0
	s.commands.tOn2 = 0
	s.commands.servoAngle = 0
	s.commands.portAssign = respPort

	s.resp.health = 0
	s.resp.accelX = 0
	s.resp.accelY = 0
	s.resp.orient = 0
	s.resp.battery = 0
	return s
}
func (s *Sheep)updateState(raw []byte) {
	log.Println()
	s.resp.health = raw[0]
	s.resp.accelX = raw[1]
	s.resp.accelY = raw[2]
	s.resp.orient = raw[3]
	s.resp.battery = raw[4]
}

func (s * Sheep)recState(group * sync.WaitGroup){
	defer group.Done()
	resp := make([]byte,5)
	respConn, err := net.ListenUDP("udp",s.resppoint)
	respConn.SetReadDeadline(time.Now().Add(time.Millisecond*10))
	defer respConn.Close()

	_,_,err = respConn.ReadFromUDP(resp)

	if err == nil {
		s.updateState(resp)
	}
}

func ( s Sheep)sendCommands(commout * net.UDPAddr) {
	//commout is the string to send out commands form local address on outport
	Conn, err := net.DialUDP("udp", nil, s.endpoint)
	CheckError(err)
	defer Conn.Close()
	portsplit := make([]byte, 2)
	binary.LittleEndian.PutUint16(portsplit, s.commands.portAssign)
	msg := []byte{
		s.commands.sheepF,
		s.commands.duty_cycle1,
		s.commands.tOn1,
		s.commands.duty_cycle2,
		s.commands.tOn2,
		s.commands.servoAngle,
		portsplit[0],
		portsplit[1]}

	Conn.Write(msg)

}
