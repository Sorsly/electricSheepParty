package main

import (
	"fmt"
	"os"
	"encoding/json"
)
type Config struct {
	All [] string `json:"all"`
	Cpu string `json:"cpu"`
	Cam [] string `json:"cam"`
	Bot [] string `json:"bot"`
	Fes [] string `json:"fes"`
}
func CheckError(err error) {
	if err  != nil {
		fmt.Println("Error: " , err)
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