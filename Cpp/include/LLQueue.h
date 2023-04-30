#ifndef LLQUEUE_H
#define LLQUEUE_H

#include<Queue.h>
#include<LinkedList.h>
template<class T>
class LLQueue : public Queue<T>
{
public:
	LinkedList<T>* list;

	LLQueue();
	~LLQueue();

	void enqueue(T data);


	T dequeue();

	bool isEmpty();
	bool isFull();


	T front();
	T rear();

	void print();

	Node<T>* getfront() {
		return Front;
	}
	Node<T>* getrear() {
		return Rear;
	}

private:

	Node<T>* Front;
	Node<T>* Rear;

};

#include "LLQueue.cpp"
#endif