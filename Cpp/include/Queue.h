#ifndef QUEUE_H
#define QUEUE_H

template<class T>
class Queue
{
public:

	
	virtual void enqueue(T data) = 0;
	virtual T dequeue() = 0;

	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;

	virtual T front() = 0;
	virtual T rear() = 0;
	virtual void print() = 0;

private:

};



#endif


