#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {

 string character;
 int number;
 cout<< "Input: " << endl;
	while(1){
		
		cin >> character;
		cin >> number;
		
		if (number == -2){
			cout << "(program end)";
			break;}

		if(number == -1){
			cout << "\n";
		}
		if(number > 0 ){
			for(int i = 0; i < number; i++){
				cout << character;
			}
			cout << endl;
		}
	}

}