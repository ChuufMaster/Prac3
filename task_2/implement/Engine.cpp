#include "Engine.h"

Engine::Engine(Bank* bank,Research* research,Hero* hero){
	this->bank = bank;
	this->hero = hero;
	this->research = research;
}

bool Engine::notifyBankReduction(int amount)
{
return this->bank->reduceGold(amount);
}

int Engine::requestBankTotal()
{
return this->bank->getCurrentGold();
}

void Engine::notifyTile()
{
	// TODO - implement Engine::notifyTile
	throw "Not yet implemented";
}

void Engine::notifyHero(int damage,string character)
{
	// TODO - implement Engine::notifyHero
	throw "Not yet implemented";
}

void Engine::notifyPlayer()
{
	// TODO - implement Engine::notifyPlayer
	throw "Not yet implemented";
}

void Engine::notifyResearch(string trapIcon)
{
	this->research->removeFromQueue(trapIcon);
}

void Engine::executeResearch(int trapNum)
{
	this->research->addToQueue(trapNum);
}

void Engine::notifyNewPlayerRound()
{
	this->research->newRound();
}