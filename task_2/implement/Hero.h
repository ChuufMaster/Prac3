#ifndef HERO_H
#define HERO_H

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

	virtual void ability() = 0;

	boolean getIteratorType();

	void setIteratorType(boolean iteratorType);
};

#endif
