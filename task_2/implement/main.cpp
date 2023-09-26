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
        }
    }
    return 0;
}