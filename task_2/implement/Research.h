#ifndef RESEARCH_H
#define RESEARCH_H

class Research {

private:
	int researchCost;
	int roundsTillComplete;
	boolean unlocked;
	traps traps[];
	Research** researchQueue;

public:
	boolean getUnlocked();

	void setUnlocked(boolean unlocked);

	void addToQueue();
};

#endif
