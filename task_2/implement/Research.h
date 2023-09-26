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
	Trap* traps[5];
	queue<Trap*> researchQueue;

public:
	bool getUnlocked();

	void setUnlocked();

		void newRound();

	void addToQueue(int trapNum);
	void removeFromQueue(string trapIcon);
	Research(Trap* traps[],Engine* core);
		Research();
};

#endif
