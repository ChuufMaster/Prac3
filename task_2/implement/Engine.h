#ifndef ENGINE_H
#define ENGINE_H

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
