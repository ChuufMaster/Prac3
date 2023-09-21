#include "Tentatively_accepted.h"
#include "Contract.h"
#include "State.h"

void Tentatively_accepted::handleAdd(string c) {
	this->contract->setCondition(c);
	for(int i = 0; i < this->contract->num_vote; i++){
		this->contract->setVote(i, false);
	}
	this->contract->changeStatus(new Negotiation(this->contract));
}

void Tentatively_accepted::handleRemove(string c) {
	this->contract->deleteCondition(c);
	for(int i = 0; i < this->contract->num_vote; i++){
		this->contract->setVote(i, false);
	}
	this->contract->changeStatus(new Negotiation(this->contract));
}

void Tentatively_accepted::handleAccept() {
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

	for(int i = 0; i < this->contract->num_vote; i++){
		this->contract->setVote(i, false);
	}
	this->contract->changeStatus(new Accepted(this->contract));
}

void Tentatively_accepted::handleReject() {
	this->contract->changeStatus(new Rejected(this->contract));
}

void Tentatively_accepted::handleComplete() {
	throw runtime_error("Only accepted contracts can be completed");
}

string Tentatively_accepted::getStatus() {
	return "Tentatively Accepted";
}

Tentatively_accepted::Tentatively_accepted(Contract* contract) {
	this->contract = contract;
}
