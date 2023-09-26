#include "weakTrap.h"

weakTrap::weakTrap(Engine* core) {
	this->damage = 50;
	this->character = "W";
	this->cost = 150;
	this->core = core;
		this->researchCost =0;
	this->roundsTillComplete =0;
	this->unlocked = true;
}
