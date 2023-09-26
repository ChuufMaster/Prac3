#include "teleportTrap.h"



teleportTrap::teleportTrap(Engine* core) {
	this->damage = 0;
	this->character = "T";
	this->cost = 450;
	this->core = core;
		this->researchCost =900;
	this->roundsTillComplete =3;
	this->unlocked = false;
}

