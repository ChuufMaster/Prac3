#include <exception>
#include<string>
#include<iostream>
using namespace std;

#include "Subscriber.h"
#include "State.h"

void Subscriber::update() {
	this->_observerState = this->_state->getStatus();
	cout << "Contract updated to: " << this->_observerState << endl;
}

void Subscriber::setState(State* s){
	this->_state = s;
}

