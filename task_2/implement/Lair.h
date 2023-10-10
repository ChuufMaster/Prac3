#ifndef LAIR_H
#define LAIR_H

#include <vector>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

class Tile;
class Hero;

class Lair {

private:
	vector<vector<Tile*>> grid;
	//vector<vector<Tile*>> grid(5, vector<Tile*>(5, nullptr));
	vector<Tile*> tiles;
	queue<Hero*> heroes;

	Tile* attach(Tile* _t, int _col, int _row, char direction);
public:
	Tile* getFirstTile();

	Hero* nextHero();

	string toString();

	void addTile(Tile* _tile, int _col, int _row);

	void addHero(Hero* _h);

	Lair();

	void play();

	void removeTile(int _col, int _row);
};

#endif
