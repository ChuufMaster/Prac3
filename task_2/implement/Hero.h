#ifndef HERO_H
#define HERO_H

class Iterator;
class Engine;
class Tile;
class Hero {

private:
	int health;
	int damage;
	Engine* heart;
public:
	Iterator* iterator;
	int getHealth();

	void setHealth(int health);

	int getDamage();

	void setDamage(int damage);

	void setIterator(Iterator* _i);

	void setTile(Tile* tile);

	virtual void ability() = 0;

	Hero(int health, int damage);
};

#endif
