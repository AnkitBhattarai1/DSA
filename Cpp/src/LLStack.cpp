#include<LLStack.h>
#include<iostream>
using namespace std;

template <class T>
LLStack<T>::LLStack() {
	list = new LinkedList<T>();
	top = list->getHead();
}

template <class T>
void LLStack<T>::push(int info) {
	if (isFull()) {
		cout << "The Stack is fulll";
		cout << "It will now not hold more elements \n";
	}
	else {
		Node<T>* newnode = list->addToHead(info);
		top = list->getHead();
	}

}

template <class T>
T LLStack<T>::pop() {
	
	if (isEmpty()) cout << "The Stack is empty nothing to pop\n";

	else {
		top = top->getnext();
		return list->removeFromHead(); }


}

template <class T>
bool LLStack<T>::isEmpty() {
	return list->isEmpty();

}

template <class T>
bool LLStack<T>::isFull() {
	return false;
}

template <class T>
T LLStack<T>::peek() {
	return top->getData();

}

template <class T>
void LLStack<T>::print() {
	
	list->traverse();
}

