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
#include "getOrient.h"

using namespace cv;
using namespace std;

int main(int argc, char *argv[]){
	cv::VideoCapture cap(1);

	//This holds all the blob data. it is a pointer to a vector of pointers to vectors of pointers
	std::vector<std::vector<blob *> *> * blobHist = new std::vector<std::vector<blob *> *>() ;
	
	cv::Mat frame;
	clock_t begin;
	//This value is the depth of blob list the memory should remember
	int memory = 50;

	//All argument handling
	bool useCam;
	int time = 30;

	if(!argv[1]){
		printf("SUPPLY ARGUMENTS\n");
		return 1;
	} else if(strcmp(argv[1],"-c")==0){
		useCam = true;
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
	int buffs = 150;
	short * LUT = genlut(frame);
	unsigned char * buffer = (unsigned char *)malloc(sizeof(unsigned char)*buffs);
	for( int i = 0; i < buffs;i++){
		buffer[i] = 0x00;
	}

	//client
	tcp_client c;
	string host = "localhost";

	//Functional Loop
	for(;;){
		if(useCam){
			cap >> frame;
		}else {
			frame = imread(argv[2],CV_LOAD_IMAGE_COLOR);
                }
		begin = clock();

		//All the real computation occurs here
		addBlobMem(frame,blobHist, memory);

		getOrient(*(blobHist->begin()),frame,70);

                circle(frame,cv::Point(250,250),10,Scalar(255,0,0),5,8,0);
		//For display purposes
		printf("Time: %f\n",double(clock()-begin)/CLOCKS_PER_SEC);
		printBlobs(*(blobHist->begin()));
		displayBlobs(frame, *(blobHist->begin()));
        printf("Displaying Frame...");
		cv::imshow("Output",frame);

		//Send to Server, if they want
		if(c.conn(host,1918)){
			blistToBytes(*(blobHist->begin()),LUT,buffer,buffs);
			c.send_data(buffer,buffs);
			c.closeSock();
		}

		cv::waitKey(time);
	}

	freeHist(blobHist);
	free(LUT);
	free(buffer);
	frame.release();
}
