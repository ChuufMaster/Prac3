#include "Research.h"
using namespace std;
#include <string>

Research::Research(Research *trps[],Engine* core)
{
	this->traps[0] = trps[0]; // hoard
	this->traps[1] = trps[1]; // noTrap
	this->traps[2] = trps[2]; // weakTrap
	this->traps[3] = trps[3]; // teleportTrap
	this->traps[4] = trps[4]; // nukeTrap
	this->heart = core;
}

bool Research::getUnlocked()
{
	return this->unlocked;
}

void Research::setUnlocked()
{
	this->unlocked = true;
}

void Research::addToQueue(int trapNum)
{
	int cost = this->traps[trapNum]->researchCost;
	// ask enige if player has enough gold
	bool canAfford = this->heart->notifyBankReduction();
	if (canAfford)
	{
	//	cout<<trapNum<<" SUCCESSFULLY ADDED TO QUEUE COMPLETE IN: "<<traps[trapNum]->roundsTillComplete<<" ROUNDS."<<"\n";
	researchQueue.push()
	}
}

Research::Research(){

}
