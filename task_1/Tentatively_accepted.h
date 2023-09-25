#ifndef TENTATIVELY_ACCEPTED_H
#define TENTATIVELY_ACCEPTED_H

#include "State.h"
#include "Accepted.h"
#include "Rejected.h"
//#include "Contract.h"

#include<string>
using namespace std;

class Tentatively_accepted :public State {


	public:
	void handleAdd(string c);

	void handleRemove(string c);

	void handleAccept();

	void handleReject();

	void handleComplete();
	
	string getStatus();

	Tentatively_accepted(Contract* contract);
};

#endif
