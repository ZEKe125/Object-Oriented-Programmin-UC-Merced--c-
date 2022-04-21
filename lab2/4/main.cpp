#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int printHex(int n){
	return 0;
}

int main(int argc, char *argv[]) {

 int number;
 while(1){
		cout << "\nENTER NUMBER: ";
		cin >> number;
		if(number == -1){break;}
		if(number > 0){
			cout << " 10-bit Binary: "<< bitset<10>(number) << endl;
			cout << " HEX: 0x" << hex << number << endl;
		}
			
 }
}