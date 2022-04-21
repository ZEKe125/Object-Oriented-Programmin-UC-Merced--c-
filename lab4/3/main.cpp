#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include "LinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {

	double num[10] ;
	double x;
	void* ptr;
	LinkedList::Link* l;
	
	cout << "File Input..." << endl;

	//open file
	ifstream input("input.txt");

	// load doubles into stack
	int i = 0;
	input >> num[i];
	LinkedList myList(&num[i],0);
	i++;

	while(!input.eof()){
		input >> num[i];
		//cout << "num i is :" << num[i] << endl;
		myList.push(&num[i]);
		i++;
	}

	cout << endl;
	cout << "Output: " << endl;

	// print 
	myList.print();
	cout << endl;
	//clean up
	myList.cleanup();
	cout << endl;

}