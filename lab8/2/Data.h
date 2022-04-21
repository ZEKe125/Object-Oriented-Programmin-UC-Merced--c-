#ifndef DATA_H
#define DATA_H


#include <iostream>
#include <vector>

using namespace std;

class Data {
    vector<int> v;
public:
	// Adds a number to the data set.
	void add (int number){
		v.push_back(number);
	}
// Prints out the entire data set on a single line, separated by space.
void print (){
	for (int i = 0 ; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
// Sorts the data set in ascending order
void sort (){

	// insertionSort
	
	 int i, val, j;
    for (i = 1; i < v.size(); i++)
    {
        val = v[i];
        j = i - 1;
 
        while (j >= 0 && v[j] > val){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = val;
    }

	
}


};

#endif