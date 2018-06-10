#ifndef STACK_HPP
#define STACK_HPP

struct Node{
	Node *next;
	int value;
};

class Stack{
public:
	Stack(void);
	void push(int);
	int pop(void);
	int top(void);

private:
	Node *head;
};
#endif
