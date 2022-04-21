#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include "Stash.h"

using namespace std;

int main(int argc, char *argv[]) {

	Stash myStash; 
	myStash.initialize(sizeof(char));
	char character;
 	int number;

	cout<< "Input: " << endl;
	cout << "Incremet? : ";
	cin >> number;
	myStash.incrementVal = number;

	while(1){
		cin >> character;
		cin >> number;
		
		if (number == 99 && character == '&'){
			cout << "(program end)" << endl;
			break;
		}


		for(int i = 0; i < abs(number); i++){
			myStash.add(new char(character));
		}
		if (number < 0 ){
			myStash.add(new char('\n'));
		}
	}

	cout << "\nOutput: " << endl;
	
	for(int i = 0; i < myStash.count(); i++){
		cout << *(char*)myStash.fetch(i);
	}

	cout << "\n" << myStash.reAllocCount << endl;
	cout << myStash.reAllocCount * myStash.incrementVal << endl;

	myStash.cleanup();
 
}