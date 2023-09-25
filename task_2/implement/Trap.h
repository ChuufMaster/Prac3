#ifndef TRAP_H
#define TRAP_H

class Trap : Research {

private:
	int damage;
	int cost;

public:
	virtual void steppedOn() = 0;

	virtual string toString() = 0;
};

#endif
