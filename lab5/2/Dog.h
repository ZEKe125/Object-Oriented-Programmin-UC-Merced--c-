#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"


using namespace std;
class Dog : public Animal {
    
    
public:
	Dog(string name, int age){
		cout << "Creating Dog" << endl;
		this->setName(name);
		this->setAge(age);
	}
	
	~Dog(){
		cout << "Deleting: "<< this->getName() << endl;
	}
	 void feed(){
        cout << "A small bone Please!" << endl;
    }
    
    
};

#endif