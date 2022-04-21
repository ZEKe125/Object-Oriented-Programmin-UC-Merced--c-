#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

//#include "words.txt"
using namespace std;

bool Prime(int num) {
    
	if (num <= 1)
			return false;

	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return false;

	return true;
}

int main(int argc, char *argv[]) {

  cout << "\nTask 3 Print Prime Nums";
	int number;
	cout << "\nENTER NUMBER: ";
	cin >> number;
	cout << "Prime number list:" << endl;

	for(int i = 1; i < number; i++ ){
		if(Prime(i)){
			cout << i << endl;
		}
	}

	
}