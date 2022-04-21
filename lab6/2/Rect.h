#ifndef RECT_H
#define RECT_H

#include <iostream>
#include "Vec.h"
using namespace std;

class Rect  {

	public:
		float length;
		float width;
		Vec UpperLeft;

	Rect(float x, float y, float length, float width){
		UpperLeft = Vec(x,y);
		this->length = length;
		this->width = width;
		
	}
	bool contains( Vec a ){
		return a.x > UpperLeft.x && a.x < UpperLeft.x + length && a.y < UpperLeft.y && a.y > UpperLeft.y - width;
		
	}
		

};

#endif