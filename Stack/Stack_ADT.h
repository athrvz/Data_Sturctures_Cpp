// Stack as an ADT [Declaration]

#ifndef STACK 
#define STACK

const int maxStackSize = 100;

template < class StackElementType>
class Stack
{
public:
	Stack();
	void push(StackElementType item);
	StackElementType pop();
	StackElementType top();
	bool isEmpty();
	bool isFull();

private:
	StackElementType stackArray[maxStackSize];
	int topIndex;
};

#endif