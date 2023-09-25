#ifndef HERO_H
#define HERO_H

class Iterator;
class Hero {

private:
	int health;
	int damage;
	Iterator* iterator;

public:
	int getHealth();

	void setHealth(int health);

	int getDamage();

	void setDamage(int damage);

	void setIterator(Iterator* _i);

	virtual void ability() = 0;

	Hero(int health, int damage);
};

#endif
