
#include<Stack.h>
#include<iostream>
using namespace std;

Stack::Stack() {

	top = -1;
}

void Stack::push(int info) {
	if (isFull()) {
		cout << "The Stack is fulll";
		cout << "It will now not hold more elements \n";
	}
	else {
		 data[top + 1] = info;
		top += 1;
	}

}

int Stack::pop() {
	if (isEmpty()) {
		cout << "The stack is empty!!!!!\n";
		cout << "Nothing to pop \n";
	}

	else {
		int output = data[top];
		top -= 1;
	}
	return top;


}

bool Stack::isEmpty() {
	if (top == -1) return true;
	else return false;

}

bool Stack::isFull() {
	if (top == StackSize - 1) return true;
	else return false;
}

int Stack::peek() {

}

void Stack::print() {
	for (int i = 0; i < top+1; i++) {
		cout<<(data[i]);
		cout << endl;
	}
}