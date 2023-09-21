#ifndef REJECTED_H
#define REJECTED_H

#include "State.h"

#include<string>
using namespace std;
class Rejected :public State {


public:
	void handleAdd(string c);

	void handleRemove(string c);

	void handleAccept();

	void handleReject();

	void handleComplete();

	string getStatus();

	Rejected(Contract* contract);
};

#endif
