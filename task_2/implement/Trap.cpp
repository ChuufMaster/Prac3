#include "Trap.h"
using namespace std;
#include <string>

string Trap::toString(){
    return this->character;
}

int Trap::steppedOn(){
    
    return this->damage;
}