#include "Menu.h"
#include <iostream>


int main(int argc, const char** argv) {
    Menu* menu = new Menu();
    while(true){
        string param;
        cout << "Operation: "<< endl;
        getline(cin, param);
        if(param == "add"){
            getline(cin, param);
            menu->addTile(param);
        }else if(param == "research"){
            getline(cin, param);
            menu->researchTrap(param[0]);
        }else if(param == "map"){
            menu->printMap();
        }else if(param == "remove research"){
            //menu->removeTrapFromQueue(param[0]);
        }else if(param == "horde"){
            menu->viewHorde();
        }else if(param == "play"){
            menu->play();
        }
    }
    return 0;
}