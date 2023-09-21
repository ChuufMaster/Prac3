#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "State.h"
#include "Completed.h"

#include<string>
using namespace std;
class Accepted :public State {


public:
	void handleAdd(string c);

	void handleRemove(string c);

	void handleAccept();

	void handleReject();

	void handleComplete();

	string getStatus();

	Accepted(Contract* contract);
};

#endif
