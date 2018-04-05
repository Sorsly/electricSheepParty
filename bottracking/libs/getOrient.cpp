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
#include "printBlobs.h"
#define PI 3.1415
using namespace cv;
using namespace std;
void getOrient(std::vector<blob*> * blist,cv::Mat & pic,int frameSize){
    std::vector<blob *>::iterator it = blist->begin();
    std::vector<blob *>::iterator itt;
    int largest;
    cv::Rect roi;
    cv::Mat roiImg;
    cv::Mat mask;
    std::vector<blob*> * nBlist;
    blob* closest;
    double angle;
    int lX;
    int lY;
    int hX;
    int hY;

    while(it != blist->end()) {
        largest = 0;
        lX = (*it)->cenX -frameSize/2;
        lY = (*it)->cenY -frameSize/2;
        hX = (*it)->cenX +frameSize/2;
        hY = (*it)->cenY +frameSize/2;
        if(lX < 0){
            lX = 0;
        }
        if(lY < 0){
            lY = 0;
        }
        if(hX > pic.cols){
            hX = pic.cols-1;
        }
        if(hY > pic.rows){
            hY = pic.rows-1;
        }
        roi = cv::Rect(cv::Point(lX,lY),cv::Point(hX,hY));
        rectangle(pic,roi,cv::Scalar(0, 255, 0));
        roiImg = pic(roi);
        nBlist = findBlobs(roiImg,300,&wantOrientPx);
        filterBlist(nBlist,&filterfunc);
        printf("NUM orientblobs: %d\n",nBlist->size());
        if(nBlist->size() == 0){
            break;
        }
        itt = nBlist->begin();
        while(itt != nBlist->end()){
            if((*itt)->vol > largest){
                closest = (*itt);
                largest = closest->vol;
            }
            itt ++;
        }
        printf("Largest Size: %d\n",largest);
        inRange(roiImg,Scalar(0,0,150),Scalar(100,100,255),mask);
        cv::imshow("Found: ",mask);
        (*it)->orient = atan2(closest->cenY+ roi.y - (*it)->cenY ,closest->cenX+ roi.x -(*it)->cenX)*180/PI;
        circle(pic,cv::Point(closest->cenX+roi.x,closest->cenY+roi.y),10,Scalar(0,0,255),5,8,0);
        while( (*it)->orient < 0){
            (*it)->orient += 360;
        }
        freeBlobs(nBlist);
        it ++;
    }
}
bool filterfunc(blob * b){
    bool ret = true;
    if(b->vol < 10){
        ret = false;
    }
    return ret;
}
bool wantOrientPx(uchar b, uchar g, uchar r){
    bool ret = false;
    if(r>130){
        if(g<100){
            if(b<100){
                ret = true;
            }
        }
    }
    return ret;
}

