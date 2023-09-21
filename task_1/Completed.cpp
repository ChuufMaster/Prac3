#include "Completed.h"
#include "Contract.h"
#include "State.h"

void Completed::handleAdd(string c) {
	return;
}

void Completed::handleRemove(string c) {
	return;
}

void Completed::handleAccept() {
	return;
}

void Completed::handleReject() {
	return;
}

string Completed::getStatus(){
	return "Completed";
}

void Completed::handleComplete() {
	return;
}

Completed::Completed(Contract* contract) {
	this->contract = contract;
}
