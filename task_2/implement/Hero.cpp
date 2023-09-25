#include "Hero.h"

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

Hero::Hero(int health, int damage):health(health), damage(damage){}
