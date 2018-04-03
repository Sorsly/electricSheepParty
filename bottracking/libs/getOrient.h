//
// Created by zhukov on 4/2/18.
//
struct blob;
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;
#ifndef TRACKING_GETORIENT_H
#define TRACKING_GETORIENT_H

void getOrient(std::vector<blob*> * ,cv::Mat & pic ,int);
bool wantOrientPx(uchar b, uchar g, uchar r);
bool filterfunc(blob *);
#endif //TRACKING_GETORIENT_H
