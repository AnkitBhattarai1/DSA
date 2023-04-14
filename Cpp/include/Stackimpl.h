
#include<Stack.h>
#include<iostream>
using namespace std;

template <class T>
Stack<T>::Stack() {

	top = -1;
}


template <class T>
void Stack<T>::push(int info) {
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
T Stack<T>::pop() {
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
bool Stack<T>::isEmpty() {
	if (top == -1) return true;
	else return false;

}

template <class T>
bool Stack<T>::isFull() {
	if (top == StackSize - 1) return true;
	else return false;
}

template <class T>
T Stack<T>::peek() {

}

template <class T>
void Stack<T>::print() {
	for (int i = 0; i < top+1; i++) {
		cout<<(data[i]);
		cout << endl;
	}
}