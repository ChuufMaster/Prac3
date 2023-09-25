#include "Tile.h"
#include <sstream>

Trap* Tile::getTrap() {
	return this->trap;
}

void Tile::setTrap(Trap* trap) {
	this->trap = trap;
}

Tile::Tile(Trap* trap, int id):trap(trap),id(id) {

}

string Tile::toString() {
	ostringstream out;

	if(this->top != NULL)
		out << this->top->toString() << endl;
	
	if(this->left != NULL)
		out << this->left->toString();

	//out << this->symbol
	if(this->right != NULL)
		out << this->right->toString();

	if(this->down != NULL)
		out << this->down->toString();

	return out.str();
}


