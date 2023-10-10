#include "Lair.h"
#include "Tile.h"
#include <stdio.h>
#include <iostream>
#include "Wizard.h"
#include "Iterator.h"
#include "BFS.h"
#include "Cleric.h"
#include "DFS.h"

using namespace std;

Tile* Lair::getFirstTile() {
	return this->tiles[0];
}

Hero* Lair::nextHero() {
	//cout << "PLEASE" << endl;
	Hero* popped = this->heroes.front();
	this->heroes.pop();
	this->heroes.push(popped);
	return popped;
}

string Lair::toString() {
	ostringstream out;
	for (int row = 0; row < 5; ++row) {
		for (int cell_row = 0; cell_row < 3; ++cell_row) {
			for (int col = 0; col < 5; ++col) {
				vector<vector<string>> tile_out(3, vector<string>(3, " "));
				string color = "";
				if (this->grid[row][col] != nullptr) {
					//cout << "help" << endl;
					tile_out = this->grid[row][col]->toString();
					color = this->grid[row][col]->color;
				}
				for (int cell_col = 0; cell_col < 3; ++cell_col)
					out << color << tile_out[cell_row][cell_col] << "\033[0m";

			}
			out << endl;
		}
	}

	return out.str();
}

void Lair::addHero(Hero* _h) {
	this->heroes.push(_h);
}

void Lair::addTile(Tile* _tile, int _col, int _row) {
		//cout << "me" << _col << _row << endl;
	if (_col < 5 && _col >= 0 && _row < 5 && _row >= 0) {
		this->tiles.push_back(_tile);
		_tile = this->attach(_tile, _col, _row + 1, 'T');
		_tile = this->attach(_tile, _col, _row - 1, 'D');
		_tile = this->attach(_tile, _col + 1, _row, 'L');
		_tile = this->attach(_tile, _col - 1, _row, 'R');
		this->grid[_row][_col] = _tile;
	}
};

Tile* Lair::attach(Tile* _t, int _col, int _row, char direction) {
	if (_col < 5 && _col >= 0 && _row < 5 && _row >= 0)
		if (this->grid[_row][_col] != nullptr) {
			switch (direction)
			{
				case 'T':
					this->grid[_row][_col]->top = _t;
					_t->down = this->grid[_row][_col];
					break;
				case 'D':
					this->grid[_row][_col]->down = _t;
					_t->top = this->grid[_row][_col];
					break;
				case 'L':
					this->grid[_row][_col]->left = _t;
					_t->right = this->grid[_row][_col];
					break;
				case 'R':
					this->grid[_row][_col]->right = _t;
					_t->left = this->grid[_row][_col];
					break;
				default:
					break;
			}
		}
	return _t;
}

Lair::Lair() {
	this->grid.resize(5, vector<Tile*>(5, nullptr));
	Hero* _h = new Wizard(100, 100);
	_h->setIterator(new BFS());
	this->addHero(_h);

	Hero* _c = new Cleric(100, 100);
	_c->setIterator(new DFS());
	this->addHero(_c);
}

void Lair::removeTile(int _col, int _row) {
	this->grid[_row][_col] = nullptr;
}

void Lair::play(){
	Hero* _h = this->nextHero();
	//cout << "ME" << endl;
	_h->setTile(this->grid[0][0]);

	Hero* _c = this->nextHero();
	//cout << "ME" << endl;
	_c->setTile(this->grid[0][0]);
	cout << this->toString() << endl;
	_h->iterator->next();
	_c->iterator->next();
	
}
