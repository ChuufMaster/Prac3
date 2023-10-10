#include "Hero.h"
#include "Iterator.h"
int Hero::getHealth() {
	return this->health;
}

void Hero::setHealth(int health) {
	this->health = health;
}

int Hero::getDamage() {
	return this->damage;
}

void Hero::setDamage(int damage) {
	this->damage = damage;
}


void Hero::setIterator(Iterator* _i) {
	this->iterator = _i;
}

void Hero::setTile(Tile* tile){
	this->iterator->setTile(tile);
}

Hero::Hero(int health, int damage):health(health), damage(damage){}
