#ifndef RESEARCH_H
#define RESEARCH_H
#include <string>
using namespace std;
class Research {

private:
	int researchCost;
	int roundsTillComplete;
	bool unlocked;
	Research** researchQueue;

public:
	bool getUnlocked();

	void setUnlocked(bool unlocked);

	void addToQueue();
};

#endif
