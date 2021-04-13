// Queue as an ADT [Declaration]

#ifndef QUEUE
#define QUEUE

const int maxQueue = 200;

template < class queueElementType >
class Queue {
public:
	Queue();
	void enqueue(queueElementType);
	queueElementType dequeue();
	queueElementType front();
	bool isEmpty();
	bool isFull();
private:
	int f;
	int r;
	queueElementType elements[maxQueue];
};

#endif