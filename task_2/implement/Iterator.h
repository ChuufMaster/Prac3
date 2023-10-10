#ifndef ITERATOR_H
#define ITERATOR_H

#include <queue>

using namespace std;

class Tile;
class Iterator {

protected:
	queue<Tile*> visited;
	Tile* current = nullptr;

public:
	virtual Tile* next() = 0;
	bool wasVisited(Tile* _t);
	virtual void setTile(Tile* tile);
};

#endif
