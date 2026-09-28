#include <iostream>
#include <string>
using namespace std;

// -------------------- Book Node Class --------------------
class BookNode
{
	public:
	    int price;
	    string title;
	    BookNode* left;
	    BookNode* right;
	
	    // Constructor
	    BookNode(int p, string t)
		{
	        price = p;
	        title = t;
	        left = right = NULL;
	    }
};

// -------------------- Binary Search Tree Class --------------------
class BookBST
{
	private:
	    BookNode* root;
	
	    // Helper: Find node with minimum price
	    BookNode* minValueNode(BookNode* node)
		{
	        while (node && node->left != NULL)
	            node = node->left;
	        return node;
	    }
	
	    // TODO 1: Insert Book into BST
	    BookNode* addBook(BookNode* node, int price, string title)
		{
	        
	        if (node == NULL)
	            return new BookNode(price, title);
	        if (price < node->price)
	            node->left = addBook(node->left, price, title);
	        else if (price > node->price)
	            node->right = addBook(node->right, price, title);
	        else
	            cout << "? Duplicate price not allowed: Rs. " << price << "\n";
	        return node;
	        
	    }
	
	    // TODO 2: Delete Book by price from BST
	    BookNode* removeBook(BookNode* node, int price)
		{    
	        if (node == NULL)
	            return NULL;
	
	        if (price < node->price)
	            node->left = removeBook(node->left, price);
	        else if (price > node->price)
	            node->right = removeBook(node->right, price);
	        else
			{
	            // Found the node
	            if (node->left == NULL && node->right == NULL)
				{
	                delete node;
	                return NULL;
	            }
				else if (node->left == NULL)
				{
	                BookNode* temp = node->right;
	                delete node;
	                return temp;
	            }
				else if (node->right == NULL)
				{
	                BookNode* temp = node->left;
	                delete node;
	                return temp;
	            }
				else
				{
	                BookNode* temp = minValueNode(node->right);
	                node->price = temp->price;
	                node->title = temp->title;
	                node->right = removeBook(node->right, temp->price);
	            }
	        }
	        return node;  
	    }
	
	    // TODO 3: In-Order Traversal to print books
	    void printInOrder(BookNode* node)
		{
	        
	        if (node != NULL)
			{
	            printInOrder(node->left);
	            cout << node->title << " (Rs. " << node->price << ")\n";
	            printInOrder(node->right);
	        }
	    }
	
	    // TODO 4: Search Book by price
	    BookNode* findBook(BookNode* node, int price)
		{
	        if (node == NULL || node->price == price)
	            return node;
	        if (price < node->price)
	            return findBook(node->left, price);
	        else
	            return findBook(node->right, price);
	    }
	
	public:
	    // Constructor
	    BookBST() {root = NULL;}
	
	    // Wrapper functions to be used in main
	    void insert(int price, string title) { root = addBook(root, price, title); }
	    void remove(int price) { root = removeBook(root, price); }
	    void display() { printInOrder(root); }
	    void search(int price)
		{
	        BookNode* found = findBook(root, price);
	        if (found)
	            cout << "Book Found: " << found->title << " (Rs. " << found->price << ")\n";
	        else
	            cout << "Book not found.\n";
	    }
};

// ----------------------- MAIN FUNCTION -----------------------
int main()
{
    BookBST tree;

    // Student own ID (hardcoded)
    string studentId = "BC230407520";     // Replace with your own VU ID
    int lastDigit = studentId[studentId.length() - 1] - '0';
    int customPrice = 500 + lastDigit;
    string customBookName = "CustomBook";

    // Display student info
    cout << "---------------- Book Management System (" << studentId << ") ----------------\n";
    cout << "Extracted Last Digit: " << lastDigit << "\n";
    cout << "Custom Book Price: Rs. " << customPrice << "\n\n";

    // Insert sample books
    tree.insert(520, "C++ Primer");
    tree.insert(580, "Clean Code");
    tree.insert(610, "Algorithms Unlocked");
    tree.insert(695, "Design Patterns");
    tree.insert(750, "Intro to AI");

    // Display before insertion
    cout << "\n-----------------------------------------\n";
	cout << "\nIn-order Traversal BEFORE inserting CustomBook:\n";
    tree.display();

    // Insert custom book
    tree.insert(customPrice, customBookName);

    // Display after insertion
    cout << "\n-----------------------------------------\n";
	cout << "\nIn-order Traversal AFTER inserting CustomBook:\n";
    tree.display();

    // Search for custom book
    cout << "\n-----------------------------------------\n";
	cout << "\nSearching for CustomBook (Rs. " << customPrice << ")...\n";
    tree.search(customPrice);

    // Delete custom book
    tree.remove(customPrice);

    // Display after deletion
    cout << "\n-----------------------------------------\n";
	cout << "\nIn-order Traversal AFTER deleting CustomBook:\n";
    tree.display();

    return 0;
}
