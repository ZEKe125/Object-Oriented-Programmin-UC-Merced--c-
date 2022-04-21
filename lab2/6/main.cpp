#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int index){
		bitset<8> set(n);
		int i = index;
		cout << "Bit at index"<< index << ": " << set[i] << endl;
		return set[i];

}
int setBit(int n, int index){
	bitset<8> set(n);
		cout << "Before Set: "<< set << endl;
		int i = index;
		if(set[i] == 0){
			set[i] = 1;
		}
		cout << "After Set: "<< set << endl;
		return 1;
}
int clearBit(int n, int index){
		bitset<8> set(n);
		cout << "Before clear: "<< set << endl;
		int i = index;
		if(set[i] == 1){
			set[i] = 0;
		}
		cout << "After clear: "<< set << endl;
		return 0;
}

int main(int argc, char *argv[]) {

 int number;
 int index;
 
		cout << "\nENTER NUMBER: ";
		cin >> number;
		cout << "\nENTER Index: ";
			cin >> index;
		cout << " 8-bit Binary: "<< bitset<8>(number) << endl;
		int x = getBit(number, index);
		x = setBit(number, index);
		x = clearBit(number,index);
			
 
}