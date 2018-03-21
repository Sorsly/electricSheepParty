package main

import (
	"encoding/json"
	"fmt"
	"os"
	"math"
)

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
func euclidDist(x1 float64, x2 float64,y1 float64,y2 float64)(float64){
	return math.Hypot(y1-y2, x1-x2)
}
func getNextPoint(sh Sheep, point [] Path, thresh float64)(Path){
	distFromClosest := math.MaxFloat64
	closest := 0
	for i,p := range point{
		dist := euclidDist(float64(sh.currX),p.X,float64(sh.currY),p.Y)
		if dist < distFromClosest {
			distFromClosest = dist
			closest = i
		}
	}
	if distFromClosest > thresh || closest == len(point){
		return point[closest]
	}else {
		return point[closest+1]
	}

}
func getTrueMag(val float64)(uint8){
	if val < -127 {
		return 0x80
	} else if val > 127 {
		return 0x7F
	}
	return uint8(val)
}
func shiftOrient(val uint8,offset uint8)(uint8){
	actval := int(val) + int(offset)
	if  actval > 255 {
		return uint8(actval%255)
	}else {
		return val + offset
	}
}