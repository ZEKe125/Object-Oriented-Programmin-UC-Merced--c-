#ifndef LA4_display_h
#define LA4_display_h

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
#include "Dog.h"

using namespace std;

void display (const vector<Animal*> &list){
    for (int i = 0; i < list.size(); i++) {
        cout << list[i]->getName() << endl;
    }
}

#endif