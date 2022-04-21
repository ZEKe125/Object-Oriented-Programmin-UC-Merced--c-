
#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "display.h"

using namespace std;

int main(int argc, const char * argv[])
{

	vector<Animal*> list;
	int num;
	cin >> num;
	char type;
	string name; 
	int age;
	
	for (int i = 0; i < num; i++){
		cin >> type;
		cin >> name;
		cin >> age;
		if (type == 'A'){
			list.push_back(new Animal(name, age));
		}
		if (type == 'D'){
			list.push_back(new Dog(name, age));
		}
	}

	display(list);
	

    return 0;
}
