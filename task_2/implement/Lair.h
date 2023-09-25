#ifndef LAIR_H
#define LAIR_H

#include <vector>
#include <string>

using namespace std;

class Tile;
class Hero;

class Lair {

private:
	vector<Tile*> tiles;

public:
	Tile* getFirstTile();

	Hero* nextHero();

	string toString();

	void addTile(Tile* tile);

	Lair();
};

#endif
