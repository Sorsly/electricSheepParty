
#include "opencv2/opencv.hpp"

using namespace std;
bool wantPx(uchar b, uchar g, uchar r){
	bool ret = false;
	if(r<50){
		if(g<50){
			if(b<50){
			ret = true;
			}	
		}
	}
	return ret;

}