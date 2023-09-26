#ifndef RESEARCH_H
#define RESEARCH_H
#include <string>
#include <queue>
#include "Engine.h"
using namespace std;
class Research {

public:
	int researchCost;
	int roundsTillComplete;
	bool unlocked;
	Engine* heart;
	Research* traps[5];
	queue<Research*> researchQueue;

public:
	bool getUnlocked();

	void setUnlocked();

	void addToQueue(int trapNum);

	Research(Research* traps[],Engine* core);
		Research();
};

#endif
