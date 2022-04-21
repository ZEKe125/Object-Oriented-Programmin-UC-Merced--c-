#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>
#include <cctype>
//#include <iostream>
#include <cstring>

//#include "words.txt"
using namespace std;

int main(int argc, char *argv[]) {



  string word; 
  cout << "\nTask 4 Word Occurences" << endl;
  cout << "input word: " ;
  cin >> word;
//	word = " " + word;
ifstream ins ("words.txt");
  int occurrence = 0;
 string line = "" ;
	bool isFound = 0;
	string line2 = "";
    //getline returns true if read successfully
    while(getline(ins, line)){
			line2 = "";
			for(int c= 0; c < line.size(); c++){
				line[c]= tolower(line[c]);
				if( line[c]== '.' ||line[c]== ','||line[c]=='?'){

				}else{line2 = line2 + line[c];
				 }
			}

			int index = 0;
      for(int j =0; j < line2.size(); j++){
				if( line2[j] == word[0] ){
					for(int i =0; i < word.size(); i++){
        		if(line2[j+i]==word[i])
							isFound = 1;
						else{
							isFound =0;
							break;
						}
      		}
					if( isFound == 1){
						occurrence++;
						isFound = 0;
					}
				}
			}
    } 
    ins.close();
  
  cout << "The word: "<< word << " occurred: "<< occurrence << endl;

}