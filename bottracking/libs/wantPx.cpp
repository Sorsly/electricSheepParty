
#include "opencv2/opencv.hpp"

using namespace std;
bool wantPx(uchar b, uchar g, uchar r){
	bool ret = false;
	if(r>245){
		if(g>245){
			if(b>245){
			ret = true;
			}	
		}
	}
	return ret;

}
