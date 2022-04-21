#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

//#include "words.txt"
using namespace std;

int l;

int main(int argc, char *argv[]) {

 int number;
 cout << "ENTER NUMBER: " << endl;
 cin >> number;
 if(number >= 0){
	 cout << "POSITIVE" << endl;
 }else{
		cout << "NEGATIVE" << endl;
 }
	if(number%2 == 0){
		cout << "EVEN" << endl;
	}else{
		cout << "ODD" << endl;
	}
}