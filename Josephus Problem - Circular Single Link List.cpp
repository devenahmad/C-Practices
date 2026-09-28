#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
	private:
		int object;
		Node *nextNode;
	public:
			int get() {return object;};
			void set (int object) {this->object = object;};
			Node *getNext() {return nextNode;};
			void setNext (Node *nextNode) {this->nextNode = nextNode;};
};

class List
{
	private:
    	int size;
    	Node *headNode;
    	Node *currentNode;
		Node *lastCurrentNode;
	public:
		//Constructor
		List()
		{
			headNode = new Node();
			headNode->setNext(NULL);
			currentNode = NULL;
			lastCurrentNode = NULL;
			size=0;
		}
		
		//ADD Function
		void add (int addObject)
		{
			Node *newNode = new Node();
			newNode->set(addObject);
			if (currentNode != NULL)
			{
				newNode->setNext(currentNode->getNext());
				currentNode->setNext(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
			}
			else
			{
				newNode->setNext(newNode);
				headNode->setNext(newNode);
				lastCurrentNode = headNode;
				currentNode = newNode;
			}
			size++;
			
			Node *firstReal = headNode->getNext();
			currentNode->setNext(firstReal);
		}
		
		//Get Current Object
		int get ()
		{
			if (currentNode != NULL && currentNode != headNode)
				return currentNode->get();
		}
		
		//Move to Next Node
		bool next()
		{
			if (currentNode == NULL || size == 0)
				return false;
			lastCurrentNode = currentNode;
			currentNode = currentNode->getNext();
			return true;
		}
		
		// Position current before the first list element
		// Reset List by Start Again
		void start ()
		{
			currentNode = headNode->getNext();
			lastCurrentNode = headNode;
		}
		
		// Remove any Node
		void remove()
		{
			if(currentNode != NULL && currentNode != headNode)
			{
				Node *nextNode = currentNode->getNext();
				lastCurrentNode->setNext(nextNode);
				delete currentNode;
				currentNode = nextNode;
				size--;
			}
		}
		
		// Length Function
		int length()
		{
			return size;
		}
};

int main(int argc, char *argv[])
{
	List list;
	int i, N=10, M=3;
	for(i=1; i<=N; i++)
		list.add(i);
	
	list.start();
	
	// Solve Josephus Problem
    while (list.length() > 1)
	{
        for(i=1; i<=M; i++)
        	list.next();
		
		cout << "Remove: " << list.get() << endl;
		list.remove();
    }
    
    cout << "Leader is: " << list.get() << endl;
};
