
#ifndef MATRIX_H
#define MATRIX_H

#include <cstring>
#include <cstddef>
#include <string>
#include <vector>
#include <iostream>
#include "Sortable.h"

using namespace std;

template<class T>
class Matrix : public Sortable<T> {
	
	// Sortable<int> M;

public:
	int row;
	int col;
	Matrix(int r, int c){
		this->row = r;
		this->col = c;
	}

	void print(){
		
		int count = 0;
		for( int r = 0; r < this->row; r++ ){
			for (int c = 0; c < this->col; c++){
				cout << this->at(count) << "\t";
				count++;
			}
			cout << endl;
		}
	}

	bool resize( int row){

		int items = this->row * this->col;
		if((items) % row == 0){
			//it's ok
			this->row = row;
			this->col = items/row;
			return true;
		}
		return false;
	}
};


#endif 
