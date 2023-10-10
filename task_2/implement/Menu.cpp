#include "Menu.h"
#include "Tile.h"
#include "Trap.h"
#include "treasureHoard.h"
#include "noTrap.h"
#include "weakTrap.h"
#include "teleportTrap.h"
#include "nukeTrap.h"
#include "Lair.h"
#include "Bank.h"
#include "Wizard.h"


void Menu::addTile(string param) {

	int _row = param[0] - '0';
	int _col = param[1] - '0';
	//cout << param[0] << param[1] << endl;
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
	//cout << "THIS" << endl;
	Tile* _t = new Tile(_trap, this->core, this->numTrap++);
	this->lair->addTile(_t, _col, _row);
}

void Menu::removeTile() {
	
}

void Menu::addTrap() {
	// TODO - implement Menu::addTrap
	throw "Not yet implemented";
}

void Menu::removeTrap(string param) {
	this->lair->removeTile(param[0], param[1]);
}

void Menu::researchTrap(int param) {
	this->core->executeResearch(param);
}

void Menu::printMap(){
 cout<<	this->lair->toString();
}

void Menu::removeTrapFromQueue(string character) {
 this->core->notifyResearch(character);
}

void Menu::viewHorde() {
cout<<"HOARD TOTAL: "<<this->core->requestBankTotal() << endl;
}

Menu::Menu(){
	this->lair = new Lair();
	this->core = new Engine(new Bank(1000), new Research(), new Wizard(100, 100));
}

void Menu::play(){
	//cout << "HELP" << endl;
	this->lair->play();
}
