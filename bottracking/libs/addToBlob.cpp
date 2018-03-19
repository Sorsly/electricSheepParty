/*
	addToBlob: Modular function that adds a pixel to the blob. Honestly I dont't really need this. Keeps it clean?
*/
#include "opencv2/opencv.hpp"
#include "addToBlob.h"
#include "blob.h"
//Weighted average of volume
void addToBlob(blob * bl,int xpos,int ypos){

	bl -> cenX = ((bl->cenX)*(bl->vol)+xpos)/(bl->vol+1);
	bl -> cenY = ((bl->cenY)*(bl->vol)+ypos)/(bl->vol+1);
	bl -> vol += 1;
	return;
}