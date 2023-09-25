#include "Cleric.h"
#include "DFS.h"

Cleric::Cleric(int health, int damage):Hero(health, damage) {
	this->setIterator(new DFS());
}

void Cleric::ability() {
	// TODO - implement Cleric::ability
	throw "Not yet implemented";
}
