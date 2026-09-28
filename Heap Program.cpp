#include <iostream>
#include <stdexcept>
using namespace std;

template <class eType>
class Heap
{
	public:
	    Heap(int capacity = 100);
	
	    bool insert(const eType& x);             // Insert element
	    void deleteMin(eType& minItem);          // Delete min element
	    const eType& getMin();                   // Get min element without removing
	
	    bool isEmpty();                          // Check if heap is empty
	    bool isFull();                           // Check if heap is full
	    int getSize();                           // Get number of elements in heap
	
	    void buildHeap(eType* anArray, int n);   // Build heap from array
	
	private:
	    int currentSize;    // Number of elements in heap
	    eType* array;       // Heap array
	    int capacity;       // Capacity of heap
	
	    void percolateDown(int hole);            // Helper for reheapify
};

// ==========================
// Constructor
// ==========================
template <class eType>
Heap<eType>::Heap(int cap)
{
    capacity = cap;
    array = new eType[capacity + 1];  // index starts at 1
    currentSize = 0;
}

// ==========================
// Insert element into heap
// ==========================
template <class eType>
bool Heap<eType>::insert(const eType& x)
{
    if (isFull())
	{
        cout << "insert - Heap is full." << endl;
        return false;
    }

    // Percolate up
    int hole = ++currentSize;
    for (; hole > 1 && x < array[hole / 2]; hole /= 2)
        array[hole] = array[hole / 2];

    array[hole] = x;
    return true;
}

// ==========================
// Delete minimum element
// ==========================
template <class eType>
void Heap<eType>::deleteMin(eType& minItem)
{
    if (isEmpty())
	{
        cout << "heap is empty." << endl;
        return;
    }

    minItem = array[1];                          // Get min element
    array[1] = array[currentSize--];              // Replace root with last element
    percolateDown(1);                             // Restore heap order
}

// ==========================
// Get minimum element
// ==========================
template <class eType>
const eType& Heap<eType>::getMin()
{
    if (!isEmpty())
        return array[1];
    throw runtime_error("Heap is empty.");
}

// ==========================
// Check if heap is empty
// ==========================
template <class eType>
bool Heap<eType>::isEmpty() {return currentSize == 0;}

// ==========================
// Check if heap is full
// ==========================
template <class eType>
bool Heap<eType>::isFull() {return currentSize == capacity;}

// ==========================
// Get current size of heap
// ==========================
template <class eType>
int Heap<eType>::getSize() {return currentSize;}

// ==========================
// Percolate down (reheapify)
// ==========================
template <class eType>
void Heap<eType>::percolateDown(int hole)
{
    int child;
    eType tmp = array[hole];

    for (; hole * 2 <= currentSize; hole = child)
	{
        child = hole * 2;

        // Select smaller child
        if (child != currentSize && array[child + 1] < array[child])
            child++;

        // Move child up if smaller than tmp
        if (array[child] < tmp)
            array[hole] = array[child];
        
		else
            break;
    }
    array[hole] = tmp;
}

// ==========================
// Build Heap from array
// ==========================
template <class eType>
void Heap<eType>::buildHeap(eType* anArray, int n)
{
    for (int i = 1; i <= n; i++)
        array[i] = anArray[i - 1];

    currentSize = n;

    for (int i = currentSize / 2; i > 0; i--)
        percolateDown(i);
}

// ==========================
// Main for Testing
// ==========================
int main() {
    Heap<int> h(10);

    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(10);

    cout << "Min element: " << h.getMin() << endl;

    int minItem;
    h.deleteMin(minItem);
    cout << "Deleted Min: " << minItem << endl;
    cout << "New Min: " << h.getMin() << endl;
    cout << "Heap size: " << h.getSize() << endl;

    return 0;
}

