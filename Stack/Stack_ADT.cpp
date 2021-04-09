// Stack as an ADT [Definition]

#include "Stack_ADT.h"
#include <assert.h>

template < class StackElementType >
Stack <StackElementType > :: Stack()
{
	topIndex = -1;
}

template < class StackElementType >
void
Stack < StackElementType > :: push(StackElementType item)
{
	++topIndex;
	// Ensure array bounds are not exceeded.
	assert(topIndex < maxStackSize);
	stackArray[topIndex] = item;
}

template < class StackElementType >
StackElementType
Stack < StackElementType > :: pop()
{
	// Ensure array bounds are not exceeded.
	assert(topIndex >= 0);
	int returnIndex(topIndex);
	--topIndex;
	return returnIndex;
}

template < class StackElementType >
StackElementType
Stack < StackElementType > :: top()
{
	return stackArray[topIndex];
}

template < class StackElementType >
bool
Stack < StackElementType > :: isEmpty()
{
	return bool(topIndex == -1);
	// return (topIndex == -1)? true : false;
}

template < class StackElementType >
bool
Stack < StackElementType > :: isFull()
{
	return bool(topIndex == maxStackSize - 1);
}

// For creating the object: 
// Stack < char > stackOfChar