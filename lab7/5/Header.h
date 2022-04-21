#ifndef HEADER_h
#define HEADER_h

#include <iostream>
using namespace std;

class AppRect
{
private:
	/* data */

public:
	int x = 0; 
	int y = 0; 
	int h = 0; 
	int w = 0;

	AppRect(/* args */){
		x = 0; 
		y = 0; 
		h = 0; 
		w = 0;
	}

	AppRect(int x, int y, int w, int h/* args */){
		this->x = x;
		this->y = y;
		this->h = h;
		this->w = w;
	}
	
	~AppRect(){
	}
	int getW() {
		return this->w;
	}
	void setW(int w) {
		this->w = w;
	}


	int getH() {
		return this->h;
	}

	void setH(int h) {
		this->h = h;
	}
	
	int size(){ return h * w;}
 	void print(){cout << "AppRect: \nx =" << x << "\ny=" << y << "\nh=" << h << "\nw=" << w << endl; }

};


class AppWindow {
    
    
public:
	AppRect rectangle;
	
    
	AppWindow(int x, int y, int w, int h){

    		rectangle = AppRect(x,y,w,h);
			//rectangle.print(); 
    }
	AppWindow(const AppRect& r){
			rectangle = r;
			//rectangle.print(); 
    }
	AppWindow(){

    		rectangle = AppRect(0,0,0,0);
			//rectangle.print(); 
    }

	const AppRect& rect( ) {
			//
			return this->rectangle;

	}
	virtual void resize(int w,int h){
		rectangle.setW(w);
		rectangle.setH(h);
	}

	
};

class CircleWin : public AppWindow
{
private:
	/* data */
public:

CircleWin(const AppRect& r)
{
	this -> rectangle = r;
}

CircleWin(int x, int y, int w, int h)
{
	this -> rectangle = AppRect(x,y,w,h);
}

void resize(int w,int h){
	rectangle.setW(w);
	rectangle.setH(h);
	if( w < h){
		cout << "radius: " << w << endl;
	}else {
		cout << "radius: " << h << endl;
	}
}

~CircleWin(){
}

};



class RectWin : public AppWindow
{
private:
	/* data */
public:

RectWin(const AppRect& r)
{
	this -> rectangle = r;
}

RectWin(int x, int y, int w, int h)
{
	this->rectangle = AppRect(x,y,w,h);
}

RectWin(){
	this->rectangle = AppRect(0,0,0,0);
	
}

void resize(int w,int h){
	rectangle.setW(w);
	rectangle.setH(h);
		cout << "area: " << (w*h) << endl;
	
}

~RectWin()
{
}

};


#endif