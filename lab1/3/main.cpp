#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>

//#include "words.txt"
using namespace std;

int main(int argc, char *argv[]) {


  cout << "\nTask 3 Word Count" << endl;

  ifstream input("words.txt");
  int count = 0;
  string line;
    //getline returns true if read successfully
    while(getline(input, line)){
      //cout << line << endl;
      count++;
      for(int i =0; i < line.size(); i++){
        //cout << line[i] << " ";
        if(line[i] == ' ' || line[i]  == '\n' || line[i]  == '\t'){
          count++;
          //cout << line[i] << " == " << count << endl;
        }
        //cout << endl;
      }
    } 
    input.close();
  
  cout << "The word count is: "<< count << endl;

} 