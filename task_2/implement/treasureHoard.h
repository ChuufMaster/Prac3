#ifndef TREASUREHOARD_H
#define TREASUREHOARD_H
#include "Trap.h"
#include <string>
using namespace std;
class treasureHoard : Trap {


public:
	int steppedOn();

	treasureHoard();

	string toString();
};

#endif
