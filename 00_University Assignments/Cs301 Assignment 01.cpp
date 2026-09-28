#include <iostream>
#include <string>
using namespace std;

class Product
{
	private:
	    int data;
	    int productId;
	    Product* next;
	
	public:
	    Product(int data, int pid)
	    {
	        this->data = data;
	        this->productId = pid;
	        this->next = NULL;
	    }
	
	    int getData()
	    {
	        return data;
	    }
	
	    void setData(int data)
	    {
	        this->data = data;
	    }
	
	    Product* getNext()
	    {
	        return next;
	    }
	
	    void setNext(Product* nextNode)
	    {
	        next = nextNode;
	    }
	
	    int getProductId()
	    {
	        return productId;
	    }
	
	    void setProductId(int pid)
	    {
	        productId = pid;
	    }
};

class Queue
{
	private:
	    Product* front;
	    Product* rear;
	
	public:
	    Queue()
	    {
	        front = rear = NULL;
	    }
	
	    void enqueue(int data, int pid)
	    {
	        Product* newNode = new Product(data, pid);
	        if (!rear)
	        {
	            front = rear = newNode;
	        }
	        else
	        {
	            rear->setNext(newNode);
	            rear = newNode;
	        }
	        cout << "Added -> Serial: " << data << ", Product ID: " << pid << endl;
	    }
	
	    void displayFront()
	    {
	        if (front)
	        {
	            cout << "First product in queue -> Serial: " << front->getData()
	                 << ", Product ID: " << front->getProductId() << endl;
	        }
	    }
	
	    void displayRear()
	    {
	        if (rear)
	        {
	            cout << "Last product in queue -> Serial: " << rear->getData()
	                 << ", Product ID: " << rear->getProductId() << endl;
	        }
	    }
	
	    int dequeue()
	    {
	        if (!front)
	        {
	            return -1;
	        }
	
	        Product* temp = front;
	        int pid = temp->getProductId();
	        cout << "Sold product with serial: " << temp->getData()
	             << " and ID: " << pid << endl;
	
	        front = front->getNext();
	        if (!front)
	        {
	            rear = NULL;
	        }
	
	        delete temp;
	        return pid;
	    }
};

main()
{
    string studentID = "bc230407520";
    string lastThree = studentID.substr(studentID.length() - 3);
    int smartphoneCount = lastThree[0] - '0';
    int tabletCount = lastThree[1] - '0';
    int watchCount = lastThree[2] - '0';

    int startProductId = 7520;
    int serial = 1;

    Queue inventory;

    cout << "Student ID: " << studentID << endl;
    cout << "==============================" << endl;

    cout << smartphoneCount << " smartphones being added to inventory:" << endl;
    for (int i = 0; i < smartphoneCount; ++i)
    {
        inventory.enqueue(serial++, startProductId++);
	}

    cout << "\n" << tabletCount << " tablets being added to inventory:" << endl;
    for (int i = 0; i < tabletCount; ++i)
    {
	    inventory.enqueue(serial++, startProductId++);
	}

    cout << "\n" << watchCount << " smart watches being added to inventory:" << endl;
    for (int i = 0; i < watchCount; ++i)
    {
		inventory.enqueue(serial++, startProductId++);
	}

    cout << "\n--------------------------------" << endl;
    inventory.displayFront();
    cout << "--------------------------------" << endl;
    inventory.displayRear();

    cout << "\nSelling 2 products..." << endl;
    inventory.dequeue();
    inventory.dequeue();

    cout << "\n--------------------------------" << endl;
    inventory.displayFront();
    cout << "==============================" << endl;
}
