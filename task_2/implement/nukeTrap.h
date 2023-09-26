#ifndef NUKETRAP_H
#define NUKETRAP_H
#include "Trap.h"
#include <string>
using namespace std;
class nukeTrap : public Trap {


public:
	int steppedOn();

	nukeTrap(Engine* core);
};

#endif
