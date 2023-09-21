#include "Contract.h"
#include "State.h"

void Contract::addCondition(string c) {
	this->state->handleAdd(c);
}

void Contract::removeCondition(string c) {
	this->state->handleRemove(c);
}

void Contract::accept() {
	this->state->handleAccept();
}

void Contract::reject() {
	this->state->handleReject();
}

void Contract::complete() {
	this->state->handleComplete();
}

void Contract::changeStatus(State* s) {
	//delete this->state;
	this->state = s;
}

string Contract::getStatus() {
	return this->state->getStatus();
}

string* Contract::getCondition() {
	return this->condition;
}

void Contract::setCondition(string condition) {
	string* out = new string[this->num_condition+1];
	for(int i = 0; i < this->num_condition; i++){
		out[i] = this->condition[i];
	}
	out[this->num_condition] = condition;
	this->num_condition++;
	delete[] this->condition;
	this->condition=out;
}

void Contract::deleteCondition(string condition) {
	string* out = new string[this->num_condition-1];
	int out_count = 0;
	for(int i = 0; i < this->num_condition-1; i++){
		if(this->condition[i] == condition){
			out_count++;
		}
		out[i] = this->condition[out_count];
		out_count++;
	}
	delete[] this->condition;
	this->condition = out;
	this->num_condition--;
}

bool* Contract::getVote() {
	return this->vote;
}

void Contract::setVote(int i, bool vote) {
	this->vote[i] = vote;
}

Contract::Contract(int parties, string name) {
	this->vote = new bool[parties];

	for(int i = 0; i < parties; i++){
		this->vote[i] = false;
	}

	this->state = new Negotiation(this);
	this->name = name;
	this->num_vote = parties;
	this->num_condition = 0;
}

Contract::~Contract() {
	//delete this->state;
}

string Contract::toString() {
	ostringstream out;

	out << "Contract " << this->name << endl;
	out << "\tState:" << this->getStatus() << endl;

	if (this->getStatus() == "Tentatively Accepted" || this->getStatus() == "Accepted") {
		out << "\tVotes:" << endl;
		for (int i = 0; i < this->num_vote; i++){
			out << "\t\t" << this->vote[i] << endl;
		}
	}

	out << "\t" << "Conditions:" << endl;

	for(int i = 0; i < this->num_condition; i++){
		out << "\t\t" << this->condition[i] << endl;
	}

	return out.str();
}
