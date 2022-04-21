#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

 int number;
 while(1){
		cout << "\nENTER NUMBER: ";
		cin >> number;
		if(number == 0){break;}
		if(number > 0){
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
}