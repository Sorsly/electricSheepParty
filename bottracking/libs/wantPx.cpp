
#include "opencv2/opencv.hpp"

using namespace std;
bool wantPx(uchar b, uchar g, uchar r){
	bool ret = false;
	if(r>180){
		if(g<100){
			if(b<100){
			ret = true;
			}	
		}
	}
	return ret;

}
