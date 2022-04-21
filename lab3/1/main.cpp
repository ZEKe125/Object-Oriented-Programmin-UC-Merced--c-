#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {
vector<string> storage;
 string word;
 string search;
 cout<< "Input: " << endl;
	while(1){
		//cout << "ENTER string: " << endl;
		cin >> word;
		//cout << word << "\tsize: " << word.size() << endl;
		// quit == break
		if (word == "quit"){break;}

		if(word.size() == 1){
			search = word;
		}else{
			storage.push_back(word);
		}

	}

	for(int i = 0; i < storage.size(); i++){
		if( search[0] == storage[i][0]){
			cout << storage[i] << endl;
		}
		if( toupper(search[0]) == storage[i][0]){
			cout << storage[i] << endl;
		}
		
	}


}