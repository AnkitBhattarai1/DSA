#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H


#define StackSize 100
#include<Stack.h>

template<class T>
class ArrayStack
{
public:
	ArrayStack();
	~ArrayStack();

	int data[StackSize];
	int top = -1;



	void push(int data);
	T  pop();
	bool isEmpty();
	bool isFull();

	T peek();

	void print();

private:


private:

};




#include"ArrayStack.cpp"

#endif
