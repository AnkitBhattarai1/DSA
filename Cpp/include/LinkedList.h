#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <class T>
class Node
{
public:
	Node();

	void setinfo(T data);
	void setnext(Node<T>* next);
	Node* getnext();
	T getData();

private:
	T info;
	Node<T>* next;
};

template<class T>
class LinkedList
{
public:
	LinkedList();

	bool isEmpty();
	bool hasOneElement();

	Node<T>* addToHead(T data);
	Node<T>* addToTail(T data);
	Node<T>* add(T data, Node<T>* pred);

	T removeFromTail();
	T removeFromHead();
	T remove(Node<T>* pred);
	T remove(T data);
	Node<T>* retrive(T data);
	bool search(T data);



	Node<T>* findprev(Node<T>* node);
	//Node<T>* findnode(T data);

	void traverse();

	Node<T>* getHead() {
		return HEAD;
	}

	Node<T>* getTail() {
		return TAIL;
	}

	

private:
	Node<T>* HEAD;
	Node<T>* TAIL;

};
#include"LinkedList.cpp"



#endif 
