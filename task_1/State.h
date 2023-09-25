#ifndef STATE_H
#define STATE_H

//#include "Contract.h"
//#include "Subscriber.h"
#include<string>
using namespace std;

class Contract;
class Subscriber;
class State {

protected:
	Contract* contract;

public:
	virtual void handleAdd(string c) = 0;

	virtual void handleRemove(string c) = 0;

	virtual void handleAccept() = 0;

	virtual void handleReject() = 0;

	virtual void handleComplete() = 0;

	virtual string getStatus() = 0;

	void attach(Subscriber* o);
	void detach(Subscriber* o);

	void notify();

	Subscriber* getSub();

	State();

private:
	Subscriber* subscriberList;
};

#endif
