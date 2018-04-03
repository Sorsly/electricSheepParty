#include "opencv2/opencv.hpp"
#include "displayBlobs.h"
#include "blob.h"
using namespace std;
using namespace cv;
void displayBlobs(cv::Mat & pic,std::vector<blob*> *bloblist){
	int channels = pic.channels();
	int cols = pic.cols;
	int rows = pic.rows;
	uchar * p;
	cv::Point drawpoint;
	int pxpos;
	int pypos;
	for(vector <blob*>::iterator ii = bloblist->begin();ii != bloblist->end();ii++){
		pxpos = (int)((*ii)->cenX);
		pypos = (int)((*ii)->cenY);
		for(int _y = 0; _y < rows; ++_y){
			p = pic.ptr<uchar>(_y);
			for(int _x = 0; _x < cols; _x += 1){
				if(pxpos == _x && pypos == _y){
					circle(pic,cv::Point(_x,_y),10,Scalar(255,0,255),5,8,0);
				}
			}
		}
	}
}