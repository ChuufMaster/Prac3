#include <exception>
using namespace std;

#ifndef __Subscriber_h__
#define __Subscriber_h__

//#include "State.h"

#include<string>
using namespace std;

class State;
//class Subscriber;

class Subscriber
{
	public:
		void update();
		void setState(State* s);
	private:
		string _observerState;
		State* _state;

};

#endif
