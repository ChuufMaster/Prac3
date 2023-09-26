#include "Lair.h"
#include "Tile.h"
#include <stdio.h>
#include <windows.h>

Tile* Lair::getFirstTile() {
	return this->tiles[0];
}

Hero* Lair::nextHero() {
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
				vector<vector<char>> tile_out(3, vector<char>(3, ' '));
				if (this->grid[row][col] != nullptr)
					tile_out = this->grid[row][col]->toString();

				for (int cell_col = 0; cell_col < 3; ++cell_col)
					out << this->grid[row][col]->color << tile_out[cell_row][cell_col] << "\033[0m" ;

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
	if (_col < 5 && _col >= 0 && _row < 5 && _row >= 0) {
		this->tiles.push_back(_tile);
		_tile = this->attach(_tile, _col, _row-1, 'T');
		_tile = this->attach(_tile, _col, _row+1, 'D');
		_tile = this->attach(_tile, _col-1, _row, 'L');
		_tile = this->attach(_tile, _col+1, _row, 'R');
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
}

void Lair::removeTile(int _col, int _row){
	this->grid[_row][_col] = nullptr;
}
