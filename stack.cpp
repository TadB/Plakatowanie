#include <iostream>
#include "stack.hpp"
using namespace std;

Stack::Stack(void):head(NULL){
}

void Stack::push(int value){
	Node pointer;
	pointer.value = value;
	pointer.next = this -> head;
	this -> head = &pointer;
}

int Stack::pop(void){
	Node *pointer;
	pointer = head;
	head = head -> next;
	return(pointer -> value);
}

int Stack::top(void){
	return (head -> value);
}
