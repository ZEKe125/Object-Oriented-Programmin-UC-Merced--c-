#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

using namespace std;

struct Entry {
	private:	
	string Name;
	string Lastname;
	string Email;

	public:

		Entry() {
			Name = "";
			Lastname = "";
			Email = "";
		}
	
		Entry(string name , string last, string email) {
			Name = name;
			Lastname = last;
			Email = email;
		}
		
		void setName(string Name) { this->Name = Name; }
		string getName() { return this->Name; }
		void setLastname(string Lastname) { this->Lastname = Lastname; }
		string getLastname() { return this->Lastname; }
		void setEmail(string Email) { this->Email = Email; }
		string getEmail() { return this->Email; }

		void print(){

			cout << "Name: " << Name << endl;
			cout << "Lastname: " << Lastname << endl;
			cout << "Email: " << Email << endl;
			
		}



	};
#endif