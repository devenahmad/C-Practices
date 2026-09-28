#include <iostream>
using namespace std;

class Queue
{
	private:
		int *array;
		int front, rear, noElements, size;
	public:
		// Constructo & Deconstructor
		Queue(int s)
		{
			size = s;
			array = new int[size];
			front = 0;
			rear = -1;
			noElements = 0;
		}

		~Queue()
		{
			delete[] array;
		}
		
		/* Remove element from the front */
		int dequeue()
		{	
			if (isEmpty())
			{
				cout << "Queue is empty! No ticket to serve.\n";
				return -1;
			}
			int x = array[front];
			front = (front + 1) % size;
			noElements = noElements - 1;
			return x; 
		}
	
		/* Insert an element in the rear */
		void enqueue(int x)
		{	
			if (isFull())
			{
				cout << "Queue is full! Cannot add new ticket.\n";
				return;
			}
			rear = (rear + 1) % size;
			array[rear] = x;
			noElements = noElements + 1; 
	
		}
		
		
		/* To check if the queue is empty */
		int isEmpty()
		{
		return noElements == 0;
		}
		
		/* To check if the queue is empty */
		int isFull()
		{
		return noElements == size;
		}
};

int main() {
    int maxTickets = 100;    // max queue size
    Queue q(maxTickets);
    int ticketNumber = 1;    // ticket counter starts from 1
    char choice;

    cout << "Bank Ticketing System\n";
    cout << "Options:\n";
    cout << "  A - Add new customer ticket\n";
    cout << "  S - Serve next customer\n";
    cout << "  Q - Quit\n";

    do {
        cout << "\nEnter your choice (A/S/Q): ";
        cin >> choice;

        if (choice == 'A' || choice == 'a') {
            if (q.isFull()) {
                cout << "Sorry, ticket queue is full. Please wait.\n";
            } else {
                cout << "Issuing ticket number: " << ticketNumber << endl;
                q.enqueue(ticketNumber++);
            }
        }
        else if (choice == 'S' || choice == 's') {
            if (q.isEmpty()) {
                cout << "No customers in queue.\n";
            } else {
                int servedTicket = q.dequeue();
                cout << "Serving ticket number: " << servedTicket << endl;
            }
        }
        else if (choice == 'Q' || choice == 'q') {
            cout << "Exiting the system.\n";
            break;
        }
        else {
            cout << "Invalid choice, please try again.\n";
        }

    } while (true);

    return 0;
}
