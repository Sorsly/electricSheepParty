package main


type Camera struct {
	camres struct {
		ids []int
		X []uint64
		Y []uint64
	}
}
func initcamera(botcnt int)(*Camera){
	c := new(Camera)
	c.camres.ids = make([]int,botcnt)
	c.camres.X = make([]uint64,botcnt)
	c.camres.Y = make([]uint64,botcnt)
	return c
}
func (c Camera)getPos()([]int,[]uint64,[]uint64){
	//UPDATE POSITION
	return c.camres.ids,c.camres.X,c.camres.Y
}