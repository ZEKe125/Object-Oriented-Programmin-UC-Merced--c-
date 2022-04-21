#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}
	
	void (*deletecb) (void* pt);

	
	void setDeleteCallback( void (*delcb)(void * pt)){
		 //void (*del_func_ptr)(void * pt) = &deletecb;
		 this->deletecb = delcb;
		
	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	void* pop(){
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		
		return result;
	}
	
	bool deleteHead(){
		if(head == 0)
			return 0;
		
		deletecb(head->data);
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return 1;
	}
	
	void cleanup(){

		while(deleteHead());
		
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
		cout << endl;
	}
};
#endif