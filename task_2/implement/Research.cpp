#include "Research.h"
using namespace std;
#include <string>

Research::Research(Trap *trps[],Engine* core)
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
	// ask engine if player has enough gold
	bool canAfford = this->heart->notifyBankReduction(cost);
	if (canAfford)
	{
		cout<<trapNum<<" SUCCESSFULLY ADDED TO QUEUE COMPLETE IN: "<<traps[trapNum]->roundsTillComplete<<" ROUNDS."<<"\n";
	researchQueue.push(traps[trapNum]);
	} else {
		cout<<"CANT AFFORD";
	}
}

void Research::newRound(){
	if(researchQueue.size()<=0){
		return;
	}
	researchQueue.front()->roundsTillComplete-1;
	if(researchQueue.front()->roundsTillComplete<=0){
		researchQueue.front()->setUnlocked();
				cout<<"RESEARCH FOR "<< researchQueue.front()->character << " COMPLETED";
		researchQueue.pop();

	}
}
void Research::removeFromQueue(string trapIcon){
	if(researchQueue.front()->character == trapIcon){
		researchQueue.pop();
		cout<<trapIcon<<" HAS BEEN REMOVED FROM QUEUE";
		return;
	}
	if(researchQueue.back()->character == trapIcon){
		Trap* temp = researchQueue.front();
		researchQueue.pop();
				researchQueue.pop();
				researchQueue.push(temp);
		cout<<trapIcon<<" HAS BEEN REMOVED FROM QUEUE";
	} else {
		cout<<"NOT IN QUEUE! stupid stupid";
	}
}
Research::Research(){

}
