#ifndef WIZARD_H
#define WIZARD_H

#include "Hero.h"

class Wizard :public Hero {


public:
	Wizard(int health, int damage);

	void ability();
};

#endif
