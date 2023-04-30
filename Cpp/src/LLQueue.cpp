#include<LLQueue.h>

template<class T>
LLQueue<T>::LLQueue() {
	list = new LinkedList<T>();
	this->Rear = list->getHead();
	Front = Rear;
}

template<class T>
void LLQueue<T>::enqueue(T data) {
	Rear = this->list->addToTail(data);

}


template<class T>
T LLQueue<T>::dequeue()
{
	T data;
	if (isEmpty()) { cout << "Nothing to delete" << endl; }

	else {
		
		data =  list->removeFromHead();
		Front = list->getHead();
	}
	return data;


}

template<class T>
bool LLQueue<T>::isEmpty() {
	if (Rear == Front) return true;
	else return false;

}

template<class T>
bool LLQueue<T>::isFull() {
	return false;
}

template<class T>
T LLQueue<T>::front() {
	if (isEmpty()) cout << "Nothing in the front";

	else return this->list->getTail()->getData();

}

template<class T>
T LLQueue<T>::rear() {
	if (isEmpty()) cout << "Nothing in the rear";

	else return this->list->getHead()->getData();

}

template<class T>
void LLQueue<T>::print() {
	list->traverse();
}