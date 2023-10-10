#ifndef TRAP_H
#define TRAP_H
#include <string>
#include "Research.h"
using namespace std;

class Trap /*:public Research */{

	public:
	int researchCost;
	int roundsTillComplete;
	bool unlocked;

	string toString();
	Engine* core;
	int damage;
	int cost;
	string character;
	int steppedOn();
	bool getUnlocked();
	void setUnlocked();
};

#endif
