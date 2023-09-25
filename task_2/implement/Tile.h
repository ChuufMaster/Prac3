#ifndef TILE_H
#define TILE_H

#include <string>

class Trap;

using namespace std;
class Tile {

private:
	Trap* trap;
public:
	Tile* top;
	Tile* down;
	Tile* left;
	Tile* right;
	int id;

	Trap* getTrap();

	void setTrap(Trap* trap);

	Tile(Trap* trap, int id);

	string toString();

	void attach(string direction, Tile* _t);
};

#endif
