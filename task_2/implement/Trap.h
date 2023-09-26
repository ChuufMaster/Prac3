#ifndef TRAP_H
#define TRAP_H
#include <string>
#include "Research.h"
using namespace std;

class Trap : public Research {



public:

	string toString();
	Engine* core;
		int damage;
	int cost;
	string character;
	int steppedOn();
};

#endif
