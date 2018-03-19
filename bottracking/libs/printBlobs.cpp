#include "opencv2/opencv.hpp"
#include "printBlobs.h"
#include "blob.h"
using namespace std;
using namespace cv;

void printBlobs(std::vector<blob*> * blist){
	for(vector <blob*>::iterator ii = blist->begin();ii != blist->end();ii++){
		printf("Blob:%x, X:%f, Y:%f, Vol:%d \n", (unsigned int)(*ii)->ID, (*ii)->cenX, (*ii)->cenY, (*ii)->vol);
	}
	printf("\n");
}
