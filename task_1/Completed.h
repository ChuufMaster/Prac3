#ifndef COMPLETED_H
#define COMPLETED_H

#include "State.h"
#include<string>
using namespace std;
class Completed : public State {


public:
	void handleAdd(string c);

	void handleRemove(string c);

	void handleAccept();

	void handleReject();

	void handleComplete();

	string getStatus();

	Completed(Contract* contract);
};

#endif
