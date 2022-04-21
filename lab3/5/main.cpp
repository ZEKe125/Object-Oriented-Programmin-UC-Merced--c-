#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {

	vector<vector<string>> v(10) ;
	string word;
	string search;
	cout<< "Input: " << endl;
		while(1){
			cin >> word;
			if (word == "quit"){
				break;}
			//if(v[word[0].size()-1] == null){}
			v[word.size()-1].push_back(word);
		}

	cout << endl;

	// print
	cout<< "Output: " << endl;
		for (int i = 0; i < v.size(); i++){
			//cout << v[i].size();
			if(v[i].size() > 0){
				cout << (i+1) * v[i].size() << " " <<  v[i].size();
				cout << endl;
			}	
		}
 
}