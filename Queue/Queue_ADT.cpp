// Circular Queue as an ADT [Definition]
#include "Queue_ADT.h"
#include <assert.h>

int nextPos(int p)
{
	if (p == maxQueue - 1) // at the end of circle
		return 0;
	else
		return p + 1;
}

template <class queueElementType>
Queue <queueElementType> :: Queue()
{
	// start both front and rear.
	f = 0;
	r = 0;
}

template <class queueElementType> 
void
Queue <queueElementType> :: enqueue(queueElementType e)
{
	// add e to rear, advancing rear to next.
	assert(nextPos(r) != f); // front and rear should not orverlap
	r = nextPos(r);
	elements[r] = e;
}

template < class queueElementType > 
queueElementType
Queue < queueElementType > :: dequeue()
{
	// advance front of queue, return value of front 
	assert (f != r); // queue is not empty.
	f = nextPos(f);
	return elements[f];
}

template < class queueElementType > 
queueElementType
Queue < queueElementType > :: front()
{
	// return value of element at the front.
	assert(f != r);
	return elements[nextPos(f)];
}

template < class queueElementType > 
bool 
Queue < queueElementType > :: isEmpty() 
{
	// true if queue is empty - f = r.
	return bool(f == r);
}


template < class queueElementType >
bool 
Queue <queueElementType > :: isFull()
{
	// true if rear = maxQueue - 1.
	int full = nextPos(r);
	if(full == 0)
		return true;
	else
		return false;
}