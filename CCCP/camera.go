package main


type Camera struct {
	camres struct {
		ids []int
		X []int
		Y []int
	}
}
func initcamera(botcnt int)(*Camera){
	c := new(Camera)
	c.camres.ids = make([]int,botcnt)
	c.camres.X = make([]int,botcnt)
	c.camres.Y = make([]int,botcnt)
	return c
}
func (c Camera)getPos()([]int,[]int,[]int){
	//UPDATE POSITION
	return c.camres.ids,c.camres.X,c.camres.Y
}