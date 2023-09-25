#ifndef CONTRACT_H
#define CONTRACT_H

#include<iostream>
#include<string>
#include <sstream>
#include<vector>
#include<array>
//#include "State.h"
#include "Negotiation.h"

using namespace std;

//class State;

class Contract {

private:
	State* state;
	string* condition;
	bool* vote;
	int num_condition;

public:

	string name;
	int num_vote;
	void addCondition(string c);

	void removeCondition(string c);

	void accept();

	void reject();

	void complete();

	void changeStatus(State* s);

	string getStatus();

	string* getCondition();

	void setCondition(string condition);

	void deleteCondition(string condition);

	bool* getVote();

	void setVote(int i, bool vote);

	Contract(int parties, string name, Subscriber* sub);

	~Contract();

	string toString();
};

#endif
