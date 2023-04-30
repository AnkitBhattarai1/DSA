#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include<Queue.h>
template<class T>
class LLQueue : public Queue<T>
{
public:
	T[] data;
	 
	LLQueue();
	~LLQueue();

	void enqueue(T data);


	T dequeue();

	bool isEmpty();
	bool isFull();


	T front();
	T rear();

	void print();

	int getfront() {
		return Front;
	}
	int getrear() {
		return Rear;
	}

private:

	int Front;
	int Rear;

};

#include "ARRAYQueue.cpp"
#endif