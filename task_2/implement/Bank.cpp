#include "Bank.h"

int Bank::getCurrentGold()
{
	return this->currentGold;
}

void Bank::setCurrentGold(int currentGold)
{
	this->currentGold = currentGold;
}

Bank::Bank(int startingGold)
{
	startingGold = 1500;
	this->currentGold = startingGold;
}

void Bank::newRound()
{
	this->currentGold += 250;
}

void Bank::reduceGold(int reductionAmount)
{
	this->currentGold = this->currentGold - reductionAmount;
}
