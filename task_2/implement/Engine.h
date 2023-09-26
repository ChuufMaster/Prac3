#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include <queue>
#include <iostream>

using namespace std;
class Engine {

private:
	int roundCounter;

public:
	bool notifyBankReduction();
	int requestBankTotal();
	void notifyTile();

	void notifyHero();

	void notifyPlayer();

	void notifyResearch();

	void executeResearch();

	void notifyNewPlayerRound();
};

#endif
