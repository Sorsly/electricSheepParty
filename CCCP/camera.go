/*Camera is the network interface for the CV process which runs sepratly. It handles communication
And parsing of the raw data feed*/

package main

import (
	"encoding/binary"
	"net"
)

//Camera structure
type Camera struct {
	revraw chan []byte
	buffer []byte
	numbots int
	camres struct {
		ids []uint64 //ID is the id assigned by the camera
		X   []uint64
		Y   []uint64
		orient []uint64
	}
}

//This is a non blocking tcp server which the camera process connects into. If the camera does not need
//The raw data, it does not load it into the process which parses it through a channel
func (c *Camera) recvList(portnum string) {

	l, err := net.Listen("tcp", "localhost:"+portnum)
	CheckError(err)
	for {
		conn, err := l.Accept()
		CheckError(err)
		_, err = conn.Read(c.buffer)
		CheckError(err)
		select {
		case c.revraw <- c.buffer:
		default:
		}
                conn.Close()

	}
}
//Initializes the camera
func initcamera(botcnt int, portlisten string) *Camera {
	c := new(Camera)
	c.numbots = botcnt
	c.camres.ids = make([]uint64, botcnt)
	c.camres.X = make([]uint64, botcnt)
	c.camres.Y = make([]uint64, botcnt)
	c.camres.orient = make([]uint64, botcnt)
	c.buffer = make([]byte, botcnt*500)
	c.revraw = make(chan []byte)
	go c.recvList(portlisten)
	return c
}

//When this is called, it blocks until the channel feeds in the raw camera data, in which case it then
//Parses it for the actual positions
func (c *Camera) getPos(lengthReal uint64) ([]uint64, []uint64, []uint64, []uint64) {
	//UPDATE POSITION
	raw := <-c.revraw
	pos := 1
	botnum := 0
	for raw[pos] != 0 && botnum < c.numbots{
		c.camres.ids[botnum] = uint64(binary.BigEndian.Uint32(raw[pos : pos+4]))
		pos += 4
		c.camres.X[botnum] = uint64(binary.BigEndian.Uint16(raw[pos : pos+2]))*lengthReal/65536
		pos += 2
		c.camres.Y[botnum] = uint64(binary.BigEndian.Uint16(raw[pos : pos+2]))*lengthReal/65536
		pos += 2
		c.camres.orient[botnum] = uint64(binary.BigEndian.Uint16(raw[pos : pos+2]))
		pos += 2

		botnum += 1
	}

	return c.camres.ids, c.camres.X, c.camres.Y, c.camres.orient
}



