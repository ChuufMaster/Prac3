#include "Lair.h"
#include "Tile.h"

Tile* Lair::getFirstTile() {
	// TODO - implement Lair::getFirstTile
	throw "Not yet implemented";
}

Hero* Lair::nextHero() {
	// TODO - implement Lair::nextHero
	throw "Not yet implemented";
}

string Lair::toString() {
	ostringstream out;
	for (int row = 0; row < 5; ++row) {
		for (int col = 0; col < 5; ++col) {
			if(this->grid[row][col] != nullptr){
				vector<vector<char>> tile_out = this->grid[row][col]->toString();
			}
		}
		out << endl;
	}

	return out.str();
}

void Lair::addHero(Hero* _h) {
	this->heroes.push_back(_h);
}

void Lair::addTile(Tile* _tile, int _x, int _y) {
	this->tiles.push_back(_tile);
};

Lair::Lair() {
	this->grid.resize(5, vector<Tile*>(5, nullptr));
}
