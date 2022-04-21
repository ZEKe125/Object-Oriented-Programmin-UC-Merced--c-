#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

class LinkedList {      
public:
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;
    
	
    LinkedList(double* d, int val){
        head = 0;
        head = new Link;
        head->initialize(d, NULL);
    }

	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, NULL);
		Link *last;
		last = head;
		while (last->next != NULL){
        	last = last->next; 
		}
		last->next = newLink;
	}
	
    void add(Link* l, double val){   
        Link* link;
        link = l;
        for (double i = 0; i < val; i++){
            link->next = new Link();
            link->next->initialize(new double(i), new Link());
            link = link->next;
        }   
    }
	
    void print(){
        Link* link;
        link = head;
        while(link != 0){
            cout << *(double*)(link->data) << endl;
            link = link->next;
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
		cout << "LinkedList is Empty" << endl;

    }
};
#endif
