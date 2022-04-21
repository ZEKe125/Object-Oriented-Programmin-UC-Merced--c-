#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {

	vector<string> v ;
	string word;
	string search;
	cout<< "Input: " << endl;
		while(1){
			cin >> word;
			if (word == "quit"){break;}
			if(word.size()>= 4 ){ v.push_back(word);}
			if(word.size() <= 3 ){ search = word;}
			//v[word.size()-1].push_back(word);
		}

	cout << endl;

	// print
	cout<< "Output: " << endl;
	bool upper = 0;
	bool lower = 0;
		for(int i = 0; i < v.size(); i++){
			for(int j = 0; j < search.size(); j++){

				if( search[j] == v[i][j]){
					//cout << v[i] << endl;
					lower = true;
				}else{lower = false;}

				if( toupper(search[j]) == v[i][j]){
					//cout << v[i] << endl;
					upper = true;
				}else {upper = false;}

				if (lower || upper){
					continue;
				}else{break;}

			}
			if (lower || upper){
				cout << v[i] << " ";
			}
		
		}
		cout << endl;
 
}