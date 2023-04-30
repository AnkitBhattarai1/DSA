

#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
public:
	
	void push(int data)=0;
	T  pop()=0;

	bool isEmpty()=0;
	bool isFull()=0;

	T peek()=0;

	void print()=0;


private:

};
#endif