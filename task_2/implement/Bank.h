#ifndef BANK_H
#define BANK_H

class Bank {

private:
	int currentGold;

public:
	int getCurrentGold();

	void setCurrentGold(int currentGold);

	Bank(int startingGold);

	void reduceGold(int reductionAmount);
};

#endif
