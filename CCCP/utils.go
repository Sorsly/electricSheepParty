//Some utility functions
package main

import (
	"encoding/json"
	"fmt"
	"os"
	"math"
	"log"
)

//Structure for loading the ipconfig file
type Config struct {
	All []string `json:"all"`
	Cpu string   `json:"cpu"`
	Cam []string `json:"cam"`
	Bot []string `json:"bot"`
	Fes []string `json:"fes"`
}

func CheckError(err error) {
	if err != nil {
		fmt.Println("Error: ", err)
	}
}

//Loads the config file
func getConfig(file string) Config {
	var config Config
	configFile, err := os.Open(file)
	defer configFile.Close()
	CheckError(err)
	jsonParser := json.NewDecoder(configFile)
	jsonParser.Decode(&config)
	return config
}
//Measures the distance
func euclidDist(x1 float64, x2 float64,y1 float64,y2 float64)(float64){
	return math.Hypot(y1-y2, x1-x2)
}
func samepoint(p1 Path,p2 Path) bool{
	if p1.X == p2.X && p1.Y == p2.Y{
		return true
	}
	return false
}
//Taking in the path of the sheep, finds the next point the sheep should travel too
func getNextPoint(sh * Sheep, point [] Path, thresh float64)(ret Path){
	if !samepoint(sh.pathhead, point[0]){
		sh.pathhead.X = point[0].X
		sh.pathhead.Y = point[0].Y
		sh.pathidx = 1
	}
	dist := euclidDist(float64(sh.currX), point[sh.pathidx].X*2, float64(sh.currY), point[sh.pathidx].Y*2)
	log.Println("Dist: ",dist)
	if  dist < thresh && dist != 0{
		sh.pathidx += 1
	}
	log.Println("Path Index:",sh.pathidx)
	ret.X = point[sh.pathidx].X*2
	ret.Y = point[sh.pathidx].Y*2
	if samepoint(ret,Path{X:0,Y:0}){
		ret = Path{X:float64(sh.currX), Y:float64(sh.currY)}
	}
	return
}
//This levels off the value of the input, peaking it and leveling instead of overflowing
func getTrueMag(val float64)(int8){
	if val < -127 {
		return -127
	} else if val > 127 {
		return 127
	}
	return int8(val)
}
//shifts the value of the angle by some arbitrary offset
func shiftOrient(val uint8,offset uint8)(uint8){
	actval := int(val) + int(offset)
	if  actval > 255 {
		return uint8(actval%255)
	}else {
		return val + offset
	}
}