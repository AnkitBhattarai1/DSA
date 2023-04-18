#define StackSize 100

#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
public:
	Stack();
	int top;
	T data[StackSize];
	
	void push(int data);
	T  pop();

	bool isEmpty();
	bool isFull();

	T peek();

	void print();


private:

};

#include"Stack.cpp"
#endif