#include "treasureHoard.h"


treasureHoard::treasureHoard(Engine* core) {
	this->damage = 0;
	this->character = "H";
	this->cost = 0;
	this->core = core;
		this->researchCost =0;
	this->roundsTillComplete =0;
	this->unlocked = true;
}
