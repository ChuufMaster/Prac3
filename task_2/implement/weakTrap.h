#ifndef WEAKTRAP_H
#define WEAKTRAP_H
#include "Trap.h"
#include <string>
using namespace std;
class weakTrap : Trap {


public:
	int steppedOn();

	weakTrap();

	string toString();
};

#endif
