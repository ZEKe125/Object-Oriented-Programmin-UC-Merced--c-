#ifndef LA5_Animal_h
#define LA5_Animal_h

#include <iostream>

using namespace std;

class Animal {
    string name;
    int age;
    
public:
    virtual void talk() { cout << "Animal::talk()" << endl; }
	
    Animal(){
        name = "Generic Name";
        age = 0;
    }
    
    Animal(string n, int a){
        name = n;
        age = a;
    }

};



#endif