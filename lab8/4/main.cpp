#include "Matrix.h"
#include <iostream> 
#include <vector>
#include <string>
#include <cstring>
#include <stdlib.h> 

using namespace std;

int main(int argc, const char * argv[])
{
	int row;
	int col;
	
	cout << "int Matrix: " << endl;
	cout << "input rows: ";
	cin >> row;
	cout << "input cols: ";
	cin>> col;
	Matrix<int> NumsMat(row, col);
	// fill matrices
		int count = 0;
		for( int r = 0; r < row; r++ ){
			for (int c = 0; c < col; c++){
				NumsMat.push_back(rand() % 30 + 1); 
				count++;
			}
		}
	
	// print
	count = 0;
	cout << "\nBefore Sort: " << endl;
	NumsMat.print();
		

	//Sort
	NumsMat.sort();

	// print again
	cout << "\nAfter Sort: " << endl;
	NumsMat.print();


	//new number of rows
	int newRows;
	cout << "\nnew number of rows: "; 
	cin >> newRows;

	// resize
	
	if(NumsMat.resize(newRows)){
		cout << "\nAfter Resize: " << endl;
		NumsMat.print();
		
	}else{
		cout << "resize failed" << endl;
	}

	

	//////////////////////////////////////
	

	row = 0;
	col = 0;
	
	cout << "\nChar Matrix: " << endl;
	cout << "input rows: ";
	cin >> row;
	cout << "input cols: ";
	cin>> col;
	Matrix<char> CharMatrix(row, col);
	
	// define list of chars for rand funct
	char * abc = new char[26];
    abc[0] = 'a';
    abc[1] = 'b';
    for( int i = 2; i < 26; i++){
        abc[i] = abc[i-1] + 1;
		}
	
	// fill matrices
	char temp;
	for( int r = 0; r < row; r++ ){
		for (int c = 0; c < col; c++){
			temp = (rand() % 26);
			// cout << (int)temp << endl;
			CharMatrix.push_back(abc[temp]); 
			
		}
		// cout << endl;
	}
	
	// print
	cout << "\nBefore Sort: " << endl;
	CharMatrix.print();
	
	//Sort
	CharMatrix.sort();

	// print again
	cout << "\nAfter Sort: " << endl;
	CharMatrix.print();
	
	//new number of rows
	newRows = 0 ;
	cout << "\nnew number of rows: "; 
	cin >> newRows;

	// resize
	
	if(CharMatrix.resize(newRows)){
		cout << "\nAfter Resize: " << endl;
		CharMatrix.print();
		
	}else{
		cout << "resize failed" << endl;
	}

    return 0;
}
