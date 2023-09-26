#ifndef BANK_H
#define BANK_H

class Bank
{

private:
	int currentGold;

public:
	int getCurrentGold();

	void setCurrentGold(int currentGold);

	Bank(int startingGold);

	bool reduceGold(int reductionAmount);

	void newRound();
};

#endif
