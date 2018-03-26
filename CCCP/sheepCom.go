//sheepCom provides an interface for communicating with the bots
package main

import (
	"fmt"
	"net"
	"strconv"

	"encoding/binary"
	"log"
	"sync"
	"time"
)

//these define the bit positions of the various commands for the botflag
const SHEEPRST = 0x01
const SHEEPDIR1 = 0x02
const SHEEPDIR2 = 0x04
const SHEEPFIRE = 0x08
const SHEEPLIGHT = 0x10

const MAGFIELDOFFSET = 5

type Sheep struct {
	endpoint  *net.UDPAddr //Address to send Data
	resppoint *net.UDPAddr //Addres to recieve data
	currX     uint64       //Current position X
	currY     uint64       //Current position Y
	commands  struct {
		sheepF uint8
		// sheepF b0 = rst
		// sheepF b1 = dir1
		// sheepF b2 = dir2
		// sheepF b3 = fire
		// sheepF b4 = lightOn
		relDesX		uint8  // Relative Desired X Position
		relDesY uint8  // Relative Desired Y Position
		servoAngle  uint8  //Angle to set the servo to
		portAssign  uint16 //Assigned port
	}
	resp struct {
		health  uint8 // How much health the bot has
		accelX  uint8 // Bots X accelleration
		accelY  uint8 // Bots Y accelleration
		orient  uint8 // Bots absolute orientation
		battery uint8 // Bots battery life
	}
}

// Formats print statment
func (s *Sheep) String() string {
	return fmt.Sprintf("Addr: %v Port: %v\nResp: %v\n", s.endpoint, s.commands.portAssign, s.resp)
}

//Initializes sheep
func initsheep(ipAdd string, hostip string, respPort uint16) *Sheep {
	//	ipAdd = "localhost"
	s := new(Sheep)
	s.currX = 0
	s.currY = 0

	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(ipAdd, "1917"))
	CheckError(err)
	respServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(hostip, strconv.Itoa(int(respPort))))
	CheckError(err)

	s.endpoint = outServerAddr
	s.resppoint = respServerAddr

	s.commands.sheepF = 0
	s.commands.relDesX = 0
	s.commands.relDesY = 0
	s.commands.servoAngle = 0
	s.commands.portAssign = respPort

	s.resp.health = 0
	s.resp.accelX = 0
	s.resp.accelY = 0
	s.resp.orient = 0
	s.resp.battery = 0
	return s
}

//Parses the raw UDP response into the sheeps data structure
func (s *Sheep) updateState(raw []byte) {
	log.Println()
	s.resp.health = raw[0]
	s.resp.accelX = raw[1]
	s.resp.accelY = raw[2]
	s.resp.orient = shiftOrient(raw[3],MAGFIELDOFFSET)
	s.resp.battery = raw[4]
}

//Recieves the UDP data. if no response in time, does nothing. Nonblocking
func (s *Sheep) recState(group *sync.WaitGroup) {
	defer group.Done()
	resp := make([]byte, 5)
	respConn, err := net.ListenUDP("udp", s.resppoint)
	respConn.SetReadDeadline(time.Now().Add(time.Millisecond * 10))
	defer respConn.Close()

	_, _, err = respConn.ReadFromUDP(resp)

	if err == nil {
		s.updateState(resp)
	}
}

//Sends state commands to a sheep
func (s Sheep) sendCommands(commout *net.UDPAddr) {
	//commout is the string to send out commands form local address on outport
	Conn, err := net.DialUDP("udp", nil, s.endpoint)
	CheckError(err)
	defer Conn.Close()
	portsplit := make([]byte, 2)
	binary.LittleEndian.PutUint16(portsplit, s.commands.portAssign)
	msg := []byte{
		s.commands.sheepF,
		s.commands.relDesX,
		s.commands.relDesY,
		s.commands.servoAngle,
		portsplit[0],
		portsplit[1]}

	Conn.Write(msg)

}
