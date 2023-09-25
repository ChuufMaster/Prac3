#ifndef ITERATOR_H
#define ITERATOR_H

#include <queue>

using namespace std;

class Tile;
class Iterator {

protected:
	queue<Tile*> visited;
	Tile* current;

public:
	virtual Tile* next() = 0;
	bool wasVisited(Tile* _t);
};

#endif
