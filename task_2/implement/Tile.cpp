#include "Tile.h"
#include "Trap.h"
#include <sstream>

Trap* Tile::getTrap() {
	return this->trap;
}

void Tile::setTrap(Trap* trap) {
	this->trap = trap;
}

Tile::Tile(Trap* trap, Engine* core, int id):trap(trap), core(core),id(id) {

}

vector<vector<string>> Tile::toString() {
	//ostringstream out;
	
	vector<vector<string>> grid(3, vector<string>(3, " "));

	grid[0][0] = "╔";
	if(this->top != NULL)
		grid[0][1]="╩";
	else
		grid[0][1]="═";
	
	grid[0][2] = "╗";

	if(this->left != NULL)
		grid[1][0] = "╣";
	else
		grid[1][0] = "║";
	grid[1][1] = this->trap->toString()[0];

	//out << this->symbol
	if(this->right != NULL)
		grid[1][2] = "╠";
	else
		grid[1][2] = "║";

	grid[2][0] = "╚";

	if(this->down != NULL)
		grid[2][1] = "╦";
	else
		grid[2][1] = "═";
	grid[2][2] = "╝";

	return grid;
}

/* ╔╬╗╔═╗╔╬╗
   ╬H╬╬N╬╬H╬
   ╚╬╝╚═╝╚╬╝ 
   ╔╬╗   ╔╬╗
   ╬H╬   ╬H╬
   ╚╬╝   ╚╬╝    */



