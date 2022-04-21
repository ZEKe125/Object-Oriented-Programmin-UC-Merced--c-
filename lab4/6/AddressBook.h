#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
#include <string>
#include "Entry.h"


using namespace std;

struct AddressBook {
     
		public:
			struct Link { 
				Entry* data;
				Link* next;
				
				void initialize(Entry* dat, Link* nxt) {
					data = dat;
					next = nxt;
				} 
			}* head;
			
			AddressBook(){
				head = 0;
			}
			AddressBook(Entry* d, int val){
				head = 0;
				head = new Link;
				head->initialize(d, NULL);
			}

			void add (Entry* dat){
				// if head is null
				if( head == 0){
					Link* newLink = new Link;
					newLink->initialize(dat, NULL);
					head = newLink;
					return;
				}

				Link* newLink = new Link;
				newLink->initialize(dat, NULL);
				Link *last;
				last = head;
				while (last->next != NULL){
					last = last->next; 
				}
				last->next = newLink;
			}
			
			
			void print(){
				Link* link;
				link = head;
				int i = 0;
				while(link != 0){
					cout << "\nEntry " << i << endl;
					link->data->print();
					link = link->next;
					i++;

				}
			}

			bool delHead(){
				if(head == 0)
					return 0;
				Link* oldHead = head;
				head = head->next;
				delete oldHead;
				
				return 1;
			}

			
			void cleanup() {
				//cout << "Entered cleanup() " << endl;
				int i = 1;
				while(delHead()){
					//cout << "pop() " << i  << endl;
					i++;
				}
				cout << "AddressBook is Empty" << endl;

			}
		

		


	};
#endif