struct blob;
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;
std::vector<blob*> * findBlobs(cv::Mat &,double);