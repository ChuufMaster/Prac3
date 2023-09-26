#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include <queue>
#include <iostream>
#include "Bank.h"
#include "Research.h"
#include "Hero.h"
#include "Trap.h"
using namespace std;
class Engine
{

private:
	int roundCounter;
	Bank* bank;
	Research* research;
	Hero* hero;

public:
	bool notifyBankReduction(int amount);
	int requestBankTotal();
	void notifyTile();

	void notifyHero(int damage,string character);

	void notifyPlayer();

	void notifyResearch(string trapIcon);

	void executeResearch(int trapNum);

	void notifyNewPlayerRound();
	
	Engine(Bank* bank,Research* research,Hero* hero);
};

#endif
