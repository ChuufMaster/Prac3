#ifndef CLERIC_H
#define CLERIC_H

#include "Hero.h"
class Cleric :public Hero {


public:
	Cleric(int health, int damage);

	void ability();
};

#endif
