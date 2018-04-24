//sheepCom provides an interface for communicating with the bots
package main

import (
	"fmt"
	"net"
	"strconv"
	"encoding/binary"
	"sync"
	"time"
)

//these define the bit positions of the various commands for the botflag
const SHEEPRST = 0x01
const SHEEPDIR1 = 0x02
const SHEEPDIR2 = 0x04
const SHEEPFIRE = 0x08
const SHEEPLIGHT = 0x10
const SHEEPSTOP = 0x20
const SHEEPREPROGRAM = 0x40

const MAGFIELDOFFSET = 5

type Sheep struct {
	endpoint  *net.UDPAddr //Address to send Data
	resppoint *net.UDPAddr //Addres to recieve data
	currX     uint64       //Current position X
	currY     uint64       //Current position Y
	pathidx	  int
	pathhead Path
	commands  struct {
		sheepF uint8
		// sheepF b0 = rst
		// sheepF b1 = dir1
		// sheepF b2 = dir2
		// sheepF b3 = fire
		// sheepF b4 = lightOn
		// sheepF b5 = sheepstop
		// sheepF b6 = sheepreprogram
		relDesX		int16  // Relative Desired X Position
		relDesY int16  // Relative Desired Y Position
		servoAngle  uint8  //Angle to set the servo to
		camOrient uint16
		portAssign  uint16 //Assigned port
		twiddleL uint8
		twiddleR uint8
		kPt uint8
		kPa uint8
		kDt uint8
		kDa uint8
	}
	resp struct {
		health  uint8 // How much health the bot has
		accelX  uint8 // Bots X accelleration
		accelY  uint8 // Bots Y accelleration
		orient  int16 // Bots absolute orientation
		battery uint8 // Bots battery life
		magX    int16
		magY    int16
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
	s.pathidx = 0
	s.pathhead = Path{X:0,Y:0}

	outServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(ipAdd, "1917"))
	CheckError(err)
	respServerAddr, err := net.ResolveUDPAddr("udp", net.JoinHostPort(hostip, strconv.Itoa(int(respPort))))
	CheckError(err)

	s.endpoint = outServerAddr
	s.resppoint = respServerAddr

	s.commands.kPt = 88
	s.commands.kPa = 50
	s.commands.kDt = 100
	s.commands.kDa = 71

	s.commands.sheepF = 0
	s.commands.relDesX = 0
	s.commands.relDesY = 0
	s.commands.servoAngle = 0
	s.commands.portAssign = respPort
	s.commands.twiddleL = 57
	s.commands.twiddleR = 57

	s.resp.health = 0
	s.resp.accelX = 0
	s.resp.accelY = 0
	s.resp.orient = 0
	s.resp.battery = 0
	return s
}

//Parses the raw UDP response into the sheeps data structure
func (s *Sheep) updateState(raw []byte) {
	s.resp.health = raw[0]
	s.resp.accelX = raw[1]
	s.resp.accelY = raw[2]
	s.resp.battery = raw[3]

	buffByte := make([]byte,2)
	buffByte[0] = raw[4]
	buffByte[1] = raw[5]
	s.resp.orient = int16(binary.BigEndian.Uint16(buffByte))
	buffByte[0] = raw[6]
	buffByte[1] = raw[7]
	s.resp.magX = int16(binary.BigEndian.Uint16(buffByte))
	buffByte[0] = raw[8]
	buffByte[1] = raw[9]
	s.resp.magY = int16(binary.BigEndian.Uint16(buffByte))
}

//Recieves the UDP data. if no response in time, does nothing. Nonblocking
func (s *Sheep) recState(group *sync.WaitGroup) {
	defer group.Done()
	resp := make([]byte, 10)
	respConn, err := net.ListenUDP("udp", s.resppoint)
	respConn.SetReadDeadline(time.Now().Add(time.Millisecond * 100))
	defer respConn.Close()

	c, _, err := respConn.ReadFromUDP(resp)

	if err == nil  && c >0 {
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
	orientsplit := make([]byte,2)
	relXsplit := make([]byte,2)
	relYsplit := make([]byte,2)
	binary.LittleEndian.PutUint16(portsplit, s.commands.portAssign)
	binary.LittleEndian.PutUint16(orientsplit, s.commands.camOrient)
	binary.LittleEndian.PutUint16(relXsplit, uint16(s.commands.relDesX))
	binary.LittleEndian.PutUint16(relYsplit, uint16(s.commands.relDesY))

	msg := []byte{
		s.commands.sheepF,
		relXsplit[0],
		relXsplit[1],
		relYsplit[0],
		relYsplit[1],
		s.commands.servoAngle,
		portsplit[0],
		portsplit[1],
		orientsplit[0],
		orientsplit[1],
		s.commands.twiddleL,
		s.commands.twiddleR,
		s.commands.kPt,
		s.commands.kPa,
		s.commands.kDt,
		s.commands.kDa,
		}
	Conn.Write(msg)

}
