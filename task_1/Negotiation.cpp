#include "Negotiation.h"
#include "Contract.h"
#include "State.h"

void Negotiation::handleAdd(string c) {
	this->contract->setCondition(c);
}

void Negotiation::handleRemove(string c) {
	this->contract->deleteCondition(c);
}

void Negotiation::handleAccept() {
	this->contract->setVote(0, true);
	this->contract->changeStatus(new Tentatively_accepted(this->contract));
}

void Negotiation::handleReject() {
	this->contract->changeStatus(new Rejected(this->contract));
}

void Negotiation::handleComplete() {
	throw runtime_error("Only accepted contracts can be completed");
}

string Negotiation::getStatus() {
	return "Negotiation";
}

Negotiation::Negotiation(Contract* contract) {
	this->contract = contract;
}
