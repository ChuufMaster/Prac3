#ifndef TILE_H
#define TILE_H

#include <string>
#include <vector>

class Trap;

using namespace std;
class Tile {

private:
	Trap* trap;
public:
	Tile* top = NULL;
	Tile* down = NULL;
	Tile* left = NULL;
	Tile* right = NULL;
	int id;

	Trap* getTrap();

	void setTrap(Trap* trap);

	Tile(Trap* trap, int id);

	vector<vector<char>> toString();

	void attach(string direction, Tile* _t);

};

#endif
