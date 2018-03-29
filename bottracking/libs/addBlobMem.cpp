/*
addBlobMem: Adds the list of blobs in the current frame to the blob history. It IDs all the blobs and throws out
			the oldest blob information
*/

#include "blob.h"
#include "opencv2/opencv.hpp"
#include <vector>
#include <iostream>
#include "printBlobs.h"
#include "displayBlobs.h"
#include "freeBlobs.h"
#include "findBlobs.h"
#include "filterBlist.h"
#include "addID.h"

using namespace cv;
using namespace std;

int addBlobMem(cv::Mat & pic, std::vector<std::vector<blob *> * > * hist, int mem){
	//Gets the blobs. The integer input is the minmum squared distance of the blobs
	std::vector<blob*> * nBlist = findBlobs(pic,6000);

	//filters out all the blobs that don't meet the hardcoded critera
	filterBlist(nBlist);
	addID(nBlist,hist,10000);

	//Adds new list and removes oldes values
	hist->insert(hist->begin(),nBlist);
	if(hist->size()>mem){
		freeBlobs(hist->back());
		hist->pop_back();
	}
	return 0;
}
