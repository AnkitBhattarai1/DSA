package stack;

public interface Stack<E> {
	
	void push(E info);	
	E pop();
	
	boolean isFull();
	boolean isEmpty();
	
	E peek();
	

}
