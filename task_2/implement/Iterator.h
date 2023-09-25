#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {

private:
	Queue<Tile*> visited;
	Tile* current;

public:
	virtual Tile* next() = 0;
};

#endif
