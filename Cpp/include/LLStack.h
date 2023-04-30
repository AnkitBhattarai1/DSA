#ifndef LLSTACK_H
#define LLSTACK_H


#define StackSize 100
#include<Stack.h>
#include<LinkedList.h>

template<class T>
class LLStack
{
public:
	LLStack();
	~LLStack();

	LinkedList<T>* list;
	Node<T>* top;


	void push(int data);
	T  pop();
	bool isEmpty();
	bool isFull();

	T peek();

	void print();

private:


private:

};




#include"LLStack.cpp"

#endif
