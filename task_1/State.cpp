#include "State.h"
#include "Contract.h"
#include "Subscriber.h"

State::State(){
    //this->subscriberList = new Subscriber();
}

void State::attach(Subscriber* o){
    this->subscriberList = o;
    o->setState(this);
}

void State::detach(Subscriber* o){
    this->subscriberList = NULL;
}

void State::notify(){
    this->subscriberList->update();
}

Subscriber* State::getSub(){
    return this->subscriberList;
}