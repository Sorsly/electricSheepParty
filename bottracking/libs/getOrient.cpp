//
// Created by zhukov on 4/2/18.
//
#include "opencv2/opencv.hpp"
#include "blob.h"
#include "findBlobs.h"
#include "getOrient.h"
#include "freeBlobs.h"
#include "displayBlobs.h"
#include "filterBlist.h"
#define PI 3.1415
using namespace cv;
using namespace std;
void getOrient(std::vector<blob*> * blist,cv::Mat & pic,int frameSize){
    std::vector<blob *>::iterator it = blist->begin();
    cv::Rect roi;
    cv::Mat roiImg;
    std::vector<blob*> * nBlist;
    blob* closest;
    double angle;

    while(it != blist->end()) {
        roi = cv::Rect((*it)->cenX-frameSize/2,(*it)->cenY -frameSize/2,frameSize,frameSize);
        rectangle(pic,roi,cv::Scalar(0, 255, 0));
        roiImg = pic(roi);
        nBlist = findBlobs(roiImg,50,&wantOrientPx);
        filterBlist(nBlist,&filterfunc);
        closest = nBlist->front();
        circle(pic,cv::Point(closest->cenX+roi.x,closest->cenY+roi.y),10,Scalar(255,0,255),5,8,0);
        (*it)->orient = atan2(closest->cenY,closest->cenX)*180/PI;

        freeBlobs(nBlist);
        it ++;
    }
}
bool filterfunc(blob * b){
    bool ret = true;
    if(b->vol>20 ){
        ret = false;
    }
    return ret;
}
bool wantOrientPx(uchar b, uchar g, uchar r){
    bool ret = false;
    if(r<50){
        if(g<50){
            if(b<200){
                ret = true;
            }
        }
    }
    return ret;
}

