#ifndef TELEPORTTRAP_H
#define TELEPORTTRAP_H
#include "Trap.h"
#include <string>
using namespace std;
class teleportTrap : Trap {


public:
	int steppedOn();

	teleportTrap();

	string toString();
};

#endif