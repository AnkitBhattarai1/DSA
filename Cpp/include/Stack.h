#define StackSize 100

class Stack
{
public:
	Stack();
	int top;
	int data[StackSize];
	
	void push(int data);
	int  pop();

	bool isEmpty();
	bool isFull();

	int peek();

	void print();


private:

};

