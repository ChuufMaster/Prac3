#ifndef TILE_H
#define TILE_H

#include <string>
#include <vector>

class Trap;
class Engine;

using namespace std;
class Tile {

private:
	Trap* trap;
	Engine* core;
public:
	Tile* top = NULL;
	Tile* down = NULL;
	Tile* left = NULL;
	Tile* right = NULL;
	int id;
	string color = "";

	Trap* getTrap();

	void setTrap(Trap* trap);

	Tile(Trap* trap, Engine* core, int id);

	vector<vector<string>> toString();

	void attach(string direction, Tile* _t);

};

#endif
