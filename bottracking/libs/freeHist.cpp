#include "blob.h"
#include "freeBlobs.h"
using namespace std;
void freeHist(std::vector<std::vector<blob*> * >* bhist){
	for(vector< vector <blob*> * >::iterator ii = bhist->begin();ii != bhist->end();ii++){
		freeBlobs(*(ii));
	}

	*bhist = std::vector<std::vector<blob *> *>();
	bhist->clear();
	delete bhist;
	return;
}