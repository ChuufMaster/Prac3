#include "Menu.h"
#include "Tile.h"
#include "Trap.h"
#include "treasureHoard.h"
#include "noTrap.h"
#include "weakTrap.h"
#include "teleportTrap.h"
#include "nukeTrap.h"
#include "Lair.h"


void Menu::addTile(string param) {

	int _row = param[0];
	int _col = param[1];
	Trap* _trap;
	switch (param[2])
	{
	case 'H':
		_trap = new treasureHoard(this->core);
		break;
	case '_':
		_trap = new noTrap(this->core);
		break;
	case 'W':
		_trap = new weakTrap(this->core);
		break;
	case 'T':
		_trap = new teleportTrap(this->core);
		break;
	case 'N':
		_trap = new nukeTrap(this->core);
		break;
	default:
		_trap = new noTrap(this->core);
		break;
	}
	Tile* _t = new Tile(_trap, this->numTrap++, this->core);
	this->lair->addTile(_t, _col, _row);
}

void Menu::removeTile() {
	
}

void Menu::addTrap() {
	// TODO - implement Menu::addTrap
	throw "Not yet implemented";
}

void Menu::removeTrap() {
	// TODO - implement Menu::removeTrap
	throw "Not yet implemented";
}

void Menu::researchTrap(int param) {
	this->core->
}

void Menu::removeTrapFromQueue() {
	// TODO - implement Menu::removeTrapFromQueue
	throw "Not yet implemented";
}

void Menu::viewHorde() {
	// TODO - implement Menu::viewHorde
	throw "Not yet implemented";
}

Menu::Menu(){
	this->lair = new Lair();
}
