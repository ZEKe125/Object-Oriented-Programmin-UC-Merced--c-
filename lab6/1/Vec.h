#ifndef VEC_H
#define VEH_H

#include <iostream>
using namespace std;

class Vec {

	public:
		static Vec null;
		float x;
		float y;
	
		Vec(){
			this->x = 0;
			this ->y = 0;
		}
		Vec(float x, float y){
			this->x = x;
			this->y = y;
		}
		
		void add(Vec u){
			
			this->x = this->x + u.x;
			this->y = this->y + u.y;
			
		}
	
		void print(){
			cout << "Vec("<< this->x <<","<< this->y << ")" << endl;
		}

};
Vec Vec::null = Vec(0,0);

#endif