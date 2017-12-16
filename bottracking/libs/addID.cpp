/*
	addID: this adds the ID to the blob. A little convoluted.
*/
#include "blob.h"
using namespace std;


void addID(std::vector<blob*> * blist,std::vector<std::vector<blob *> * > * bhist,int thresh){
	//There are 3 stages of loops. At the end you get a predicted ID of the blob.

	long long nID;
	std::set<long long> ids;
	std::vector<double> xPos;
	std::vector<double> yPos;
	std::vector<int> weights;
	int point = 0;
	int youth;
	bool first = true;
	double lDist;
	double dist;

	//Stage 1: Collects all the unique IDs in the blob history
	for(vector< vector <blob*> * >::iterator jj = bhist->begin();jj != bhist->end();jj++){
		for(vector <blob*>::iterator ii = (*jj)->begin();ii != (*jj)->end();ii++){
			ids.insert((*ii)->ID);
		}
	}

	//Stage 2: for each unique ID, we find the average position of all the blobs with that ID
	// 		   Is waited by age
	for(set<long long>::iterator iter = ids.begin(); iter !=ids.end();iter++) {
		youth = bhist -> size();
		for(vector< vector <blob*> * >::iterator jj = bhist->begin();jj != bhist->end();jj++){
			for(vector <blob*>::iterator ii = (*jj)->begin();ii != (*jj)->end();ii++){
				if((*ii)->ID == (*iter)){
					if(first){
						xPos.push_back((*ii) -> cenX);
						yPos.push_back((*ii) -> cenY);
						weights.push_back(youth);
						first = false;
					}else{
						xPos[point] = (xPos[point]*weights[point] + (*ii)->cenX*youth)/(youth + weights[point]);
						yPos[point] = (yPos[point]*weights[point] + (*ii)->cenY*youth)/(youth + weights[point]);
						weights[point] += youth;
					}
				}
			}
			youth --;
		}
		point++;
		first = true;
	}

	//Stage 3: for each blob in the new blob list, we assign it the ID of the closest average position
	for(vector <blob*>::iterator ii = blist->begin();ii != blist->end();ii++){
		point = 0;
		lDist = thresh;
		// If it can not find a blob that is closer than the threshold, it gets assigned a new ID, which is its address
		(*ii)->ID = (long long)(*ii);
		for(set<long long>::iterator iter = ids.begin(); iter !=ids.end();iter++) {
			dist = pow((xPos[point]-(*ii)->cenX),2) + pow((yPos[point]-(*ii)->cenY),2);
			if(dist<lDist){
				lDist = dist;
				(*ii)->ID = *iter;
			}
		point++;
		}
	}

	return;
}

