package main

import (
	"net"
	"fmt"
	"strconv"
	"time"
)

const SHEEPRST = 0x01
const SHEEPDIR1 = 0x02
const SHEEPDIR2 = 0x04
const SHEEPFIRE = 0x08
const SHEEPLIGHT = 0x10

type Sheep struct {
	idnum int
	endpoint * net.UDPAddr
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
		portAssign uint8
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
	return fmt.Sprintf("ID: %v\nAddr: %v Port: %v\n",s.idnum,s.endpoint,s.commands.portAssign)
}

func initsheep(ipAdd string, respPort uint8)( * Sheep){
	s := new(Sheep)
	s.idnum = -1
	s.currX = -1
	s.currY = -1

	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(ipAdd,strconv.Itoa(int(respPort))))
	CheckError(err)
	s.endpoint = outServerAddr

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
func ( s Sheep)sendCommands(commout * net.UDPAddr) (int, []byte){
	resp := make([]byte,24)
	//commout is the string to send out commands form local address on outport
	Conn, err := net.DialUDP("udp", commout, s.endpoint)
	Conn.SetReadDeadline(time.Now().Add(time.Millisecond*10))
	CheckError(err)
	defer Conn.Close()
	msg := []byte{s.commands.portAssign,
		          s.commands.servoAngle,
		          s.commands.duty_cycle2,
				  s.commands.duty_cycle1,
		          s.commands.tOn1,
		          s.commands.tOn2,
		          s.commands.sheepF}
	Conn.Write(msg)
	_,err = Conn.Read(resp)
	if err != nil {
		return 1, nil
	}else {
		return 0, resp
	}
}
