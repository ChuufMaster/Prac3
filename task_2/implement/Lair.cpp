#include "Lair.h"

Tile* Lair::getFirstTile() {
	// TODO - implement Lair::getFirstTile
	throw "Not yet implemented";
}

Hero* Lair::nextHero() {
	// TODO - implement Lair::nextHero
	throw "Not yet implemented";
}

string Lair::toString() {
	// TODO - implement Lair::toString
	throw "Not yet implemented";
}

void Lair::addHero(Hero* _h){
	this->heroes.push_back(_h);
}

void Lair::addTile(Tile* _tile){
	this->tiles.push_back(_tile);
};

Lair::Lair() {
	
}
