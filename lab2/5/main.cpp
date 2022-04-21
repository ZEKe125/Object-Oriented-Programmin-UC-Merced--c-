#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

 int num[2];
 int num2 = 0;
 int* pointer1;
 int* pointer2;
 
 
		cout << "\nENTER NUMBERs: ";
		cin >> num[0];
		cin >> num[1];
		
		pointer1 = num;
		pointer2 = num;
		pointer2++;
		
		cout << "Multipy " << *pointer1 << " and " << *pointer2 << endl;
		cout << *pointer1 * *pointer2 << endl;
		cout << "Add " << *pointer1 << " and " << *pointer2 << endl;
		cout << *pointer1 + *pointer2 << endl;
		cout << "Subtract " << *pointer1 << " and " << *pointer2 << endl;
		cout << *pointer1 - *pointer2 << endl;
		cout << "Divide " << *pointer1 << " and " << *pointer2 << endl;
		cout << *pointer1 / *pointer2 << endl;
		
		//cout << *pointer1 << " and " << *pointer2 << endl;
		
 
}