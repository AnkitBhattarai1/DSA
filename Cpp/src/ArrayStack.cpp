#include<ArrayStack.h>
#include<iostream>
using namespace std;

template <class T>
ArrayStack<T>::ArrayStack() {

	top = -1;
}

template <class T>
void ArrayStack<T>::push(int info) {
	if (isFull()) {
		cout << "The Stack is fulll";
		cout << "It will now not hold more elements \n";
	}
	else {
		 data[top + 1] = info;
		top += 1;
	}

}

template <class T>
T ArrayStack<T>::pop() {
	if (isEmpty()) {
		cout << "The stack is empty!!!!!\n";
		cout << "Nothing to pop \n";
	}

	else {
		T output = data[top];
		top -= 1;
	}
	return top;


}

template <class T>
bool ArrayStack<T>::isEmpty() {
	if (top == -1) return true;
	else return false;

}

template <class T>
bool ArrayStack<T>::isFull() {
	if (top == StackSize - 1) return true;
	else return false;
}

template <class T>
T ArrayStack<T>::peek() {
	return data[top];

}

template <class T>
void ArrayStack<T>::print() {
	for (int i = top; i>=0; i--) {
		cout<<(data[i]);
		cout << endl;
	}
}

