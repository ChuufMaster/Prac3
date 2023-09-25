#ifndef TRAP_H
#define TRAP_H
#include <string>
#include "Research.h"
using namespace std;

class Trap : public Research {



public:
	virtual int steppedOn() = 0;

	virtual string toString() = 0;

		int damage;
	int cost;
};

#endif
