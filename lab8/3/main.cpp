

#include "Sortable.h"
#include <iostream>
#include <fstream> 
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[])
{

	// vector<int> v;
	Sortable<int> v1;
	int num;
	int count = 0;
    ifstream input("input1.txt");
	cout << "File 1 (int) input .." << endl;
	while(!input.eof()){
		input >> num;
		count++;
		v1.push_back(num);
		
	}
	input.close();

	v1.sort();
	for(int i = 0; i < count; i++){
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << endl;

///////////////////////////////////////
	
	Sortable<char> v2;
	char x;
	int count2 = 0;
    ifstream input2("input2.txt");
	cout << "File 2 (char) input .." << endl;
	while(!input2.eof()){
		
		input2 >> x;
		if (input2.eof()) continue;
		v2.push_back(x);
		count2++;
		// cout << x << endl;
	}
	input2.close();

	v2.sort();
	for(int i = 0; i < count2; i++){
		cout << v2[i] << " ";
	}
	cout << endl;
	cout << endl;

/////////////////////////////////////////////////////////////////////////////
	
	// declare variable
	Sortable<string> v3;
	string string;
	int count3 = 0;

	// open file
    ifstream input3("input3.txt");
	cout << "File 3 (char*) input .." << endl;
	//read in values and add them to sortable
	while(!input3.eof()){
		input3 >> string;
		v3.push_back(string);
		count3++;
	}
	//file close
	input3.close();
	// sort
	v3.sort();
	// pirnt
	for(int i = 0; i < count3; i++){
		cout << v3[i] << " ";
	}
	cout << endl;
	
    
    return 0;
}
