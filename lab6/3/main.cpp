#include <iostream>
#include <math.h>
#include <string>
#include "Rect.h"
#include "RectStash.h"

using namespace std;

int main(int argc, const char * argv[]){

	float x = 0.0; 
	float y = 0.0; 
	float length = 0.0;
	float width = 0.0;
	
	RectStash RStash;
	Rect *r;
	
	while(1){
		cin >> x;
		cin >> y;
		cin >> length;
		cin >> width;
		if(x < 0.0 && y < 0.0 && length < 0.0 && width < 0.0){
			cout << "Broken out of Rect inputs" << endl;
			break;
		}
		RStash.add(new Rect(x, y, length, width) );
	}

	Vec v;
	//Rect rct;
	cout << "Enter Vectors: " << endl;
	
	while(1){
		cin >> x;
		cin >> y;
		if( x == -99 && y == -99){break;}
		v = Vec(x,y);
		//cout << endl;
		for (int i = 0; i < RStash.count(); i++){
			Rect rct = *(Rect*)RStash.fetch(i);
			if(rct.contains(v)){
				cout << "in ";
			}else{
				cout << "out ";
			}
		}
		cout << endl;
	}
	
	
}
