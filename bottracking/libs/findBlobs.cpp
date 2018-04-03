/*
	findBlobs: finds the blobs in the current frame. outputs the pointer to the list that has all the blobs.
*/
#include "blob.h"
#include "wantPx.h"
#include "addToBlob.h"
using namespace std;

std::vector<blob*> * findBlobs(cv::Mat & pic,double distThresh, bool(*wantfct)(uchar,uchar,uchar)){
	//New list to hold all the blobs
	std::vector<blob*> * bloblist = new std::vector<blob*>;
	blob * blobBuff;

	double dist2;
	bool found;
	int ppointer;

	//this channel thing is to handle the matrix offset in rgb images.
	int channels = pic.channels();
	int cols = pic.cols;
	int rows = pic.rows;

	//Simple iteration over the whole matrix. keep track of the offset
	uchar * p;
	for(int _y = 0; _y < rows; ++_y){
		p = pic.ptr<uchar>(_y);
		for(int _x = 0; _x < cols; _x += 1){
			ppointer = _x*channels;
			//Scans through, finds the pixels we give a shit about, and adds them to a blob if theres one in range
			if ((*wantfct)(p[ppointer],p[ppointer+1],p[ppointer+2])){
				found = false;
				for(vector <blob*>::iterator ii = bloblist->begin();ii != bloblist->end();ii++){
					dist2 = pow((*ii)->cenY-_y,2)+pow((*ii)->cenX-_x,2);
					if(dist2 < distThresh){
						found = true;
						addToBlob((*ii),_x,_y);
					}
				}
				// if all blobs are out of range, it makes a new one
				if(!found){
					blobBuff = (blob*)malloc(sizeof(blob));
					blobBuff->cenX = _x;
					blobBuff->cenY = _y;
					blobBuff->vol = 1;
					blobBuff->ID = 0x00000000;
					bloblist->push_back(blobBuff);
					blobBuff->orient = 100;
				}
			}
		}
	}


	return bloblist;
}
