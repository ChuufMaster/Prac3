#ifndef ENGINE_H
#define ENGINE_H

class Engine {

private:
	int roundCounter;

public:
	void notifyBank();

	void notifyTile();

	void notifyHero();

	void notifyPlayer();

	void notifyResearch();

	void executeResearch();
};

#endif
