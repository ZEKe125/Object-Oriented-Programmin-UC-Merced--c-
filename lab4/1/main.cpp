#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include "Stash.h"

using namespace std;


int main(int argc, char *argv[]) {

	Stash myStash; 
	myStash.initialize(sizeof(double));
	double num;
	const void* ptr;
	ifstream input("input.txt");
	cout << "File input .." << endl;
	while(!input.eof()){
		input >> num;
		ptr = &num;
		//cout << "ptr is: " << *ptr << endl;
		myStash.add(ptr);
	}

	cout << "Output: " << endl;
	
	for(int i = 0; i < myStash.count(); i++){
		cout << *(double*)myStash.fetch(i) << endl;
	}

	myStash.cleanup();
 
}