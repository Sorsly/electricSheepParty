#include "opencv2/opencv.hpp"
#include "blistToBytes.h"
#include "blob.h"

using namespace std;

int blistToBytes(std::vector<blob*> * blist, short * lut, unsigned char * buff, int size){
	int pos = 1;
	int xi;
	int yi;
	unsigned char *p;
	int interval = 1;

	std::vector<blob *>::iterator it = blist->begin();
	while(it != blist->end()){

		if(pos + interval >= size){
			break;
		}

		p =(unsigned char *)&((*it)->ID);

		buff[pos] = p[3];
		pos++;
		buff[pos] = p[2];
		pos++;
		buff[pos] = p[1];
		pos++;
		buff[pos] = p[0];
		pos++;

		xi = (int)floor((*it)->cenX);
		yi = (int)floor((*it)->cenY);

		p = (unsigned char *)&(lut[xi]);

		buff[pos] = p[1];
		pos++;

		buff[pos] = p[0];
		pos++;

		p = (unsigned char *)&(lut[yi]);

		buff[pos] = p[1];
		pos++;

		buff[pos] = p[0];
		pos++;

		if(interval == 1){
			interval = pos - interval;
			buff[0] = (unsigned char)interval;
		}

		it ++ ;
	}

	for(int i = pos; i < size; i++){
		buff[i] = '\0';
	}
	return pos;

}