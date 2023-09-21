#include "Accepted.h"
#include "Contract.h"
#include "State.h"

void Accepted::handleAdd(string c) {
	throw runtime_error("Contract is already accepted");
}

void Accepted::handleRemove(string c) {
	throw runtime_error("Contract is already accepted");
}

void Accepted::handleAccept() {
	throw runtime_error("Contract is already accepted");
}

void Accepted::handleReject() {
	throw runtime_error("Contract is already accepted");
}

void Accepted::handleComplete() {
	bool* votes = this->contract->getVote();
	//int length = sizeof(votes)/sizeof(votes[0]);
	for (int i = 0; i < this->contract->num_vote; i++) {
		if (!votes[i]) {
			this->contract->setVote(i, true);
			//delete votes;
			if (i != this->contract->num_vote - 1)
				return;
		}
	}
	//delete votes;
	this->contract->changeStatus(new Completed(this->contract));
}

string Accepted::getStatus(){
	return "Accepted";
}

Accepted::Accepted(Contract* contract) {
	this->contract = contract;
}
