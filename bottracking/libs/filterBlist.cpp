/*
	filterBlist: Really just a convinenece function to modularize the rejection of certain blobs. Volume is the most
				 obvious criteria.
*/

#include "blob.h"
using namespace std;

//Want or do not want?
bool want(blob * b){
	bool ret = true;
	if(b->vol<500){
		ret = false;
	}
	return ret;
}

//Pretty simple. Figure it out
void filterBlist(std::vector<blob*> * blist){
	std::vector<blob *>::iterator it = blist->begin();
	while(it != blist->end()){
		if(!want(*it)){
			free(*it);
			it = blist->erase(it);
		}
		else ++it;
	}
	return;
}