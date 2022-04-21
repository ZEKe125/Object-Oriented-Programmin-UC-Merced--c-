#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {
vector<int> v;
 
 int number;
 cout<< "Input: " << endl;
	while(1){
		cin >> number;
		if(number == 0){break;}
		if (number < 0){
			for(int i= 0; i < v.size(); i++){
				if(v[i] == abs(number)){
					v.erase(v.begin() + i );
				}
			}

		}else{
			v.push_back(number);
		}
	}
	int sum = 0;
	int temp;
cout<< "Output: " << endl;
	for(int i= 0; i < v.size(); i++){
		cout << v[i] << " ";
		sum += v[i];
		//cout << "sum: " << sum << endl; 
	}

	cout << sum << endl;
}	