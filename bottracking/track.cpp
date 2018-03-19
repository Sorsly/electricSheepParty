/*
Blobtracker: A simple blob tracker which can ID multiple blobs in a field, and keep track of their pos
			 emphisis was placed on speed, so forgive the C like operations.
Usage: Run it and it will find blobs
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
#include "opencv2/opencv.hpp"
#include "addBlobMem.h"
#include "freeHist.h"
#include "printBlobs.h"
#include "displayBlobs.h"
#include "socketClient.cpp"
#include "genlut.h"
#include "blistToBytes.cpp"

using namespace cv;
using namespace std;

int main(int argc, char *argv[]){
	cv::VideoCapture cap(0);

	//This holds all the blob data. it is a pointer to a vector of pointers to vectors of pointers
	std::vector<std::vector<blob *> *> * blobHist = new std::vector<std::vector<blob *> *>() ;
	
	cv::Mat frame;
	clock_t begin;
	//This value is the depth of blob list the memory should remember
	int memory = 100;

	//All argument handling
	bool useCam;
	int time;

	if(!argv[1]){
		printf("SUPPLY ARGUMENTS\n");
		return 1;
	} else if(strcmp(argv[1],"-c")==0){
		useCam = true;
		time = 30;
		cap >> frame;
	} else if(strcmp(argv[1],"-i")==0){
		if(argv[2]){
			frame = imread(argv[2],CV_LOAD_IMAGE_COLOR);
			useCam = false;
			time = 0;
			if(!frame.data){
				printf("Your image doesn't exist, you worthless piece of shit\n");
				return 1;
			}
		} else {
			printf("SUPPLY AN IMAGE TO USE\n");
			return 1;
		}
	} else {
		printf("YOU'RE AN IDIOT SUPPLY ARGUMENTS THAT MAKE SENSE\n");
		return 1;
	}

	//Initalize LUT + buffer
	double scale = 0.1;
	int buffs = 150;
	short * LUT = genlut(frame,scale);
	unsigned char * buffer = (unsigned char *)malloc(sizeof(unsigned char)*buffs);
	for( int i = 0; i < buffs;i++){
		buffer[i] = 0x00;
	}

	//client
	tcp_client c;
	string host = "127.0..0.1";

	//Functional Loop
	for(;;){
		if(useCam){
			cap >> frame;
		}
		begin = clock();

		//All the real computation occurs here
		addBlobMem(frame,blobHist, memory);

		//For display purposes
		printf("Time: %f\n",double(clock()-begin)/CLOCKS_PER_SEC);
		printBlobs(*(blobHist->begin()));
		displayBlobs(frame, *(blobHist->begin()));
        printf("Displaying Frame...");
		cv::imshow("Output",frame);

		//Send to Server, if they want
	/*	if(c.conn(host,1917)){
			blistToBytes(*(blobHist->begin()),LUT,buffer,buffs);
			c.send_data(buffer,buffs);
			c.closeSock();
		}*/

		cv::waitKey(time);
	}

	freeHist(blobHist);
	free(LUT);
	free(buffer);
	frame.release();
}
