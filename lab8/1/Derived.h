#ifndef DERIVED_H
#define DERIVED_H

#include "ADT.h"
#include <iostream>

using namespace std;

class Derived : public ADT {
    
public:
    void doSomething() { cout << "Derived:: doSomething() \n";} ;
    void doSomethingElse() {cout << "Derived:: doSomethingElse() \n";} ;
    void dontDoThis() { cout << "Derived:: doSomethingElse() \n";} ;
};

#endif