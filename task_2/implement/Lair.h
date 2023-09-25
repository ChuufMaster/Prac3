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
	vector<Hero*> heroes;
public:
	Tile* getFirstTile();

	Hero* nextHero();

	string toString();

	void addTile(Tile* _tile);

	void addHero(Hero* _h);

	Lair();
};

#endif
