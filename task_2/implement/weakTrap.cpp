#include "weakTrap.h"

int weakTrap::steppedOn() {
	this->core->notifyHero(damage,character);
return damage;
}

weakTrap::weakTrap(Engine* core) {
	this->damage = 50;
	this->character = "W";
	this->cost = 150;
	this->core = core;
}
