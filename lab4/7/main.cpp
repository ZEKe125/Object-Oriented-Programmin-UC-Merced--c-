#include <iostream>
#include <math.h>
#include <string>
#include <fstream> 
#include <vector>


using namespace std;


struct OneCharOneDouble {	
	char a;
	double b;
};

struct TwoCharOneDouble {	
	char a;
	char c;
	double b;
};
struct ThreeCharOneDouble {	
	char a;
	char c;
	char d;
	double b;
};
struct FourCharOneDouble {	
	char a;
	char c;
	char d;
	char e;
	double b;
};

struct emptyStuct {	
	
};
struct OneCharOneIntOneChar{
	char a;
	int b;
	char c;
};

struct twoCharOneInt{
	char a;
	char b;
	int c;
};

int main(int argc, char *argv[]) {


cout << "sizeof(int) = "<< sizeof(int) << " Bytes." << endl; 
cout << "sizeof(double) = "<< sizeof(double) << " Bytes." << endl; 
cout << "sizeof(char) = "<< sizeof(char) << " Bytes." << endl; 

cout << "sizeof(OneCharOneDouble) = "<< sizeof(OneCharOneDouble) << " Bytes." << endl; 
cout << "sizeof(TwoCharOneDouble) = "<< sizeof(TwoCharOneDouble) << " Bytes." << endl; 
cout << "sizeof(ThreeCharOneDouble) = "<< sizeof(ThreeCharOneDouble) << " Bytes." << endl; 
cout << "sizeof(FourCharOneDouble) = "<< sizeof(FourCharOneDouble) << " Bytes." << endl; 
cout << "sizeof(emptyStuct) = "<< sizeof(emptyStuct) << " Bytes." << endl; 
cout << "sizeof(OneCharOneIntOneChar) = "<< sizeof(OneCharOneIntOneChar) << " Bytes." << endl; 
cout << "sizeof(twoCharOneInt) = "<< sizeof(twoCharOneInt) << " Bytes." << endl; 
			
 return 0;
}