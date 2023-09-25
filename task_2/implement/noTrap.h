#ifndef NOTRAP_H
#define NOTRAP_H
#include "Trap.h"
#include <string>
using namespace std;
class noTrap : Trap {


public:
	int steppedOn();

	noTrap();

	string toString();
};

#endif
