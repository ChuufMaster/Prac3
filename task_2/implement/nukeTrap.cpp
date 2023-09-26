#include "nukeTrap.h"

int nukeTrap::steppedOn() {
	this->core->notifyHero(damage,character);
return 1000;
}

nukeTrap::nukeTrap(Engine* core) {
	this->damage = 1000;
	this->character = "N";
	this->cost = 1500;
	this->core = core;
		this->researchCost =800;
	this->roundsTillComplete =6;
	this->unlocked = false;
}
