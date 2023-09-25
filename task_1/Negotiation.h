#ifndef NEGOTIATION_H
#define NEGOTIATION_H

#include "State.h"
#include "Tentatively_accepted.h"
#include "Rejected.h"

#include<string>
using namespace std;

class Negotiation : public State {


public:
	void handleAdd(string c);

	void handleRemove(string c);

	void handleAccept();

	void handleReject();

	void handleComplete();

	string getStatus();

	Negotiation(Contract* contract);
};

#endif
