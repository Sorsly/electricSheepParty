package main
import (
	"net"
	"log"
	"encoding/binary"
)

type Camera struct {
	revraw chan [] byte
	buffer []byte
	camres struct {
		ids []uint64
		X []uint64
		Y []uint64
	}
}

func (c *Camera) recvList(portnum string){

	l, err := net.Listen("tcp", "localhost:" + portnum)
	CheckError(err)
	defer l.Close()
	for {
		conn, err := l.Accept()
		CheckError(err)
		reqLen, err := conn.Read(c.buffer)
		CheckError(err)
		log.Println(reqLen)
		select {
		case c.revraw <- c.buffer:
		default:
		}

	}
}

func initcamera(botcnt int, portlisten string)(*Camera){
	c := new(Camera)
	c.camres.ids = make([]uint64,botcnt)
	c.camres.X = make([]uint64,botcnt)
	c.camres.Y = make([]uint64,botcnt)
	c.buffer = make([]byte,botcnt*500)
	c.revraw = make(chan [] byte)
	go c.recvList(portlisten)
	return c
}

func (c * Camera)getPos()([]uint64,[]uint64,[]uint64){
	//UPDATE POSITION
	raw := <- c.revraw
	pos := 1
	botnum := 0
	for raw[pos] != 0 {
		c.camres.ids[botnum] = binary.BigEndian.Uint64(raw[pos:pos+4])
		pos += 4
		c.camres.X[botnum] = binary.BigEndian.Uint64(raw[pos:pos+2])
		pos += 2
		c.camres.Y[botnum] = binary.BigEndian.Uint64(raw[pos:pos+2])
		pos += 2

		botnum += 1
	}

	return c.camres.ids,c.camres.X,c.camres.Y
}

func main(){
	cam := initcamera(5,"1917")
	for {
		cam.getPos()
	}
}