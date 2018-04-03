struct blob;
using namespace std;

void filterBlist(std::vector<blob*> * ,bool(*wantfct)(blob *));
bool want(blob *);