#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include "Stack.h"

using namespace std;

int main(int argc, char *argv[]) {

	Stack myStack; 
	myStack.initialize();
	double num[10] ;
	double x;
	void* ptr;

	cout << "File Input..." << endl;

	//open file
	ifstream input("input.txt");

	// load doubles into stack
	int i = 0;
	while(!input.eof()){
		input >> num[i];
		ptr = &num[i];
		myStack.push(ptr);
		i++;
	}

	cout << endl;
	cout << "Output: " << endl;

	// print and pop 
	while(myStack.head != 0){
		cout << *(double*)myStack.pop() << endl;
	
	}
	//clean up
	myStack.cleanup();
	cout << endl;
 
}