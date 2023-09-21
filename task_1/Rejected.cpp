#include "Rejected.h"
#include "Contract.h"
#include "State.h"

void Rejected::handleAdd(string c) {
	return;
}

void Rejected::handleRemove(string c) {
	return;
}

void Rejected::handleAccept() {
	return;
}

void Rejected::handleReject() {
	return;
}

void Rejected::handleComplete() {
	return;
}

string Rejected::getStatus(){
	return "Rejected";
}

Rejected::Rejected(Contract* contract) {
	this->contract = contract;
}
