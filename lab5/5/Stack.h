#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	~Stack(){
		while(head != 0){
			cout << pop() << " "; 
		}
		
	}
	Stack(){
		head = 0;
	}	
	Stack(int n){  
        
		double val = 1.0;
        for (int i = 0 ; i < n; i++){
			push(val);
			val = val +0.1;
        }   
    	
	}
	void initialize(){
		head = 0;
	}

	
	void (*deletecb) (void* pt);

	
	void setDeleteCallback( void (*delcb)(void * pt)){
		 //void (*del_func_ptr)(void * pt) = &deletecb;
		 this->deletecb = delcb;
		
	}
	
	void push(double dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	double pop(){
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		
		return result;
	}
	
	bool deleteHead(){
		if(head == 0)
			return 0;
		
		//deletecb(head->data);
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