#ifndef OBJECT_h
#define OBJECT_h

#include <iostream>

using namespace std;

class Object {

public:
	static int count;
    
	Object(){
    	count++ ; 
    }

};




#endif