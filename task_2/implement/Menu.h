#ifndef MENU_H
#define MENU_H

#include <string>

class Engine;
class Lair;

using namespace std;

class Menu {

private:
	int numTrap = 0;
	Engine* core;

public:
	Lair* lair;
	void addTile(string param);

	void removeTile();

	void addTrap();

	void removeTrap(string param);

	void researchTrap(int param);

	void printMap();

	void removeTrapFromQueue(string character);

	void viewHorde();

	void play();

	Menu();
};

#endif
