#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Circle {
    double x;
    double y;
    double r;
    
public:
	double area;
    
    Circle(){
        x = 0.0;
		y= 0.0;
		r = 1.0;
		area = r * r * M_PI; 
    }
	
	Circle( double x, double y, double r){
		this->x = x;
		this->y = y;
		this->r = r;
		this->area = r * r * M_PI; 
	}
	void setX(double x) { 
		this->x = x; 
	} 
	double getX() { 
		return this->x; 
	}
	void setY(double y) { 
		this->y = y; 
	} 
	double getY() {
		return this->y; 
	}
	void setR(double r) { 
		this->r = r; 
		this->area = r * r * M_PI; 
	} 
	double getR() { 
		return this->r; 
	}
    
   
    
};

#endif