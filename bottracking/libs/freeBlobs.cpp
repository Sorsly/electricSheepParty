#include "blob.h"
using namespace std;
void freeBlobs(std::vector<blob*> * blist){
	for(vector <blob*>::iterator ii = blist->begin();ii != blist->end();ii++){
		free(*ii);
	}
	*blist = std::vector<blob*>();
	blist->clear();
	delete blist;
	return ;
}