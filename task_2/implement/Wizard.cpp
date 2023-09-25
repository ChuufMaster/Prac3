#include "Wizard.h"
#include "BFS.h"

Wizard::Wizard(int health, int damage):Hero(health, damage) {
	this->setIterator(new BFS());
}

void Wizard::ability() {
	// TODO - implement Wizard::ability
	throw "Not yet implemented";
}
