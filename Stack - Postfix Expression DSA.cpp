#include <iostream>
using namespace std;

class Stack
{
	int pop()
	{
		int x = head->get();
		Node *p = head;
		head = head->getNext();
		delete p;
		return x;
	}
	
	void push(int x)
	{
		Node *newNode = new Node();
		newNode->set(x);
		newNode->setNext(head);
		head = newNode;
	}
	
	int top()
	{
		return head->get();
	}
	
	int isEmpty()
	{
		return ( head == NULL );
	}
	
	int isFull()
	{
		return(current == size-1);
	}
};

main()
{
	Stack s;	// declare a stack
	while( not end of input )	// not end of postfix expression
	{
		e = get next element of input
		if( e is an operand )
		s.push( e );
		else
		{
			op2 = s.pop();
			op1 = s.pop();
			value = result of applying operator ‘e’ to op1 and op2;
			s.push( value );
		}
	}
	finalresult = s.pop();
}

