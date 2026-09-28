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
				newNode->setNext(NULL);
				headNode->setNext(newNode);
				lastCurrentNode = headNode;
				currentNode = newNode;
			}
			size++;
		}
		
		//Get Current Object
		int get ()
		{
			if (currentNode != NULL)
				return currentNode->get();
		}
		
		//Move to Next Node
		bool next()
		{
			if (currentNode == NULL)
				return false;
			lastCurrentNode = currentNode;
			currentNode = currentNode->getNext();
			if (currentNode == NULL || size==0)
				return false;
			else
				return true;
		}
		
		// Position current before the first list element
		// Reset List by Start Again
		void start ()
		{
			lastCurrentNode = headNode;
			currentNode = headNode;
		}
		
		// Remove any Node
		void remove()
		{
			if(currentNode != NULL && currentNode != headNode)
			{
				lastCurrentNode->setNext(currentNode->getNext());
				delete currentNode;
				currentNode = lastCurrentNode->getNext();
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
	list.add(5);	list.add(13);	list.add(4);
	list.add(8);	list.add(24);	list.add(48);
	list.add(12);
	
	list.start();
	
	// Traverse and print the list
    while (list.next())
	{
        cout << "List Element: " << list.get() << endl;
    }
};
