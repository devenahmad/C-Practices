#include <iostream>
using namespace std;

// ==========================
// TreeNode Class
// ==========================
template <typename T>
class TreeNode
{
	public:
	    T data;
	    int height;
	    TreeNode* left;
	    TreeNode* right;
	
	    TreeNode(T val)
		{
	        data = val;
	        height = 1; // initially height is 1
	        left = right = NULL;
	    }
	
	    T getInfo() {return data;}
	
	    int getHeight() {return height;}
	
	    void setHeight(int h) {height = h;}
	
	    TreeNode* getLeft() {return left;}
	
	    TreeNode* getRight() {return right;}
	
	    void setLeft(TreeNode* node) {left = node;}
	
	    void setRight(TreeNode* node) {right = node;}
};

// ==========================
// Utility Functions
// ==========================
int height(TreeNode<int>* node) {return node ? node->getHeight() : 0;}

int max(int a, int b) {return (a > b) ? a : b;}

// ==========================
// Rotations
// ==========================
TreeNode<int>* singleRightRotation(TreeNode<int>* k2)
{
    TreeNode<int>* k1 = k2->getLeft();
    k2->setLeft(k1->getRight());
    k1->setRight(k2);

    k2->setHeight(max(height(k2->getLeft()), height(k2->getRight())) + 1);
    k1->setHeight(max(height(k1->getLeft()), height(k1->getRight())) + 1);

    return k1;
}

TreeNode<int>* singleLeftRotation(TreeNode<int>* k2)
{
    TreeNode<int>* k1 = k2->getRight();
    k2->setRight(k1->getLeft());
    k1->setLeft(k2);

    k2->setHeight(max(height(k2->getLeft()), height(k2->getRight())) + 1);
    k1->setHeight(max(height(k1->getLeft()), height(k1->getRight())) + 1);

    return k1;
}

TreeNode<int>* doubleLeftRightRotation(TreeNode<int>* k3)
{
    k3->setLeft(singleLeftRotation(k3->getLeft()));
    return singleRightRotation(k3);
}

TreeNode<int>* doubleRightLeftRotation(TreeNode<int>* k3)
{
    k3->setRight(singleRightRotation(k3->getRight()));
    return singleLeftRotation(k3);
}

// ==========================
// AVL Insert
// ==========================
TreeNode<int>* avlInsert(TreeNode<int>* root, int info)
{
    if (!root) {return new TreeNode<int>(info);}

    if (info < root->getInfo())
	{
        root->setLeft(avlInsert(root->getLeft(), info));

        int htdiff = height(root->getLeft()) - height(root->getRight());

        if (htdiff == 2)
		{
            if (info < root->getLeft()->getInfo())
			{
                root = singleRightRotation(root);
            }
			else
			{
                root = doubleLeftRightRotation(root);
            }
        }

    }
	
	else if (info > root->getInfo())
	{
        root->setRight(avlInsert(root->getRight(), info));

        int htdiff = height(root->getRight()) - height(root->getLeft());

        if (htdiff == 2)
		{
            if (info > root->getRight()->getInfo())
			{
                root = singleLeftRotation(root);
            }
			else
			{
                root = doubleRightLeftRotation(root);
            }
        }

    }
	
	else
	{
        // Duplicate values not allowed
        cout << "Duplicate value: " << info << " ignored." << endl;
    }

    int ht = max(height(root->getLeft()), height(root->getRight()));
    root->setHeight(ht + 1);

    return root;
}

// ==========================
// In-order Traversal
// ==========================
void inOrder(TreeNode<int>* root)
{
    if (root != NULL)
	{
        inOrder(root->getLeft());
        cout << root->getInfo() << " ";
        inOrder(root->getRight());
    }
}

// ==========================
// Main
// ==========================
int main()
{
    TreeNode<int>* root = NULL;

    // Insert nodes
    root = avlInsert(root, 30);
    root = avlInsert(root, 20);
    root = avlInsert(root, 40);
    root = avlInsert(root, 10);
    root = avlInsert(root, 25);
    root = avlInsert(root, 50);
    root = avlInsert(root, 5);

    cout << "In-order Traversal of AVL Tree: ";
    inOrder(root);
    cout << endl;

    return 0;
}
