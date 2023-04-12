package stack;

public class Stackimpl <E> implements Stack<E>  {
	
	private int  maxStackSize=100;
	private E data[];
	
	int top;

	public Stackimpl() {//Initializes an empty stack;
		top=-1;
		data = (E[]) new Object[maxStackSize];
	}
	@Override
	public void push(E info) {
		if(isFull()) {
			System.out.println("The Stack is full");
			System.out.println("No elements can be added to the stack ");
		}
		
		else {
			data[top+1]=info;
			top+=1;
		}
		
		
	}

	@Override
	public E pop() {
		if(isEmpty()) {
			System.out.println("The Stack is empty");
			System.out.println("Nothing to pop");
			return null;
		}
		
		else {
			top -= 1;
			return data[top+1];
			
		}
	}

	@Override
	public boolean isFull() {		
		if(top==maxStackSize-1) return true;		
		else return false;
	}

	@Override
	public boolean isEmpty() {
		if(top==-1) return true;
		
		else  return false;
	}

	@Override
	public E peek() {
		
		return data[top];
	}
	
	
	void print() { //prints all the elements of the stack
		int i=0;
		do {
		
		System.out.println(String.valueOf(i)+ ". " +data[i]);
		i++;
		
	}while(i<=top);
	
	}
	

}
