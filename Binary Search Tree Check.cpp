#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>
using namespace std;

template <class EType>
class BinarySearchTree;

template <class EType>
class BinaryNode {
    EType element;
    BinaryNode* left;
    BinaryNode* right;

    BinaryNode(const EType& theElement, BinaryNode* lt, BinaryNode* rt)
        : element(theElement), left(lt), right(rt) {}

    friend class BinarySearchTree<EType>;
};

template <class EType>
class BinarySearchTree {
public:
    BinarySearchTree(const EType& notFound);
    BinarySearchTree(const BinarySearchTree& rhs);
    ~BinarySearchTree();

    const EType& findMin() const;
    const EType& findMax() const;
    const EType& find(const EType& x) const;
    bool isEmpty() const;
    void makeEmpty();
    void insert(const EType& x);
    void remove(const EType& x);
    void printTree() const;

    const BinarySearchTree& operator=(const BinarySearchTree& rhs);

private:
    BinaryNode<EType>* root;
    const EType ITEM_NOT_FOUND;

    const EType& elementAt(BinaryNode<EType>* t) const;
    void insert(const EType& x, BinaryNode<EType>*& t) const;
    void remove(const EType& x, BinaryNode<EType>*& t) const;
    BinaryNode<EType>* findMin(BinaryNode<EType>* t) const;
    BinaryNode<EType>* findMax(BinaryNode<EType>* t) const;
    BinaryNode<EType>* find(const EType& x, BinaryNode<EType>* t) const;
    void makeEmpty(BinaryNode<EType>*& t) const;
    void printTree(BinaryNode<EType>* t) const;
    BinaryNode<EType>* clone(BinaryNode<EType>* t) const;
};

// Constructor
template <class EType>
BinarySearchTree<EType>::BinarySearchTree(const EType& notFound)
    : ITEM_NOT_FOUND(notFound), root(NULL) {}

// Copy constructor
template <class EType>
BinarySearchTree<EType>::BinarySearchTree(const BinarySearchTree<EType>& rhs)
    : root(NULL), ITEM_NOT_FOUND(rhs.ITEM_NOT_FOUND) {
    *this = rhs;
}

// Destructor
template <class EType>
BinarySearchTree<EType>::~BinarySearchTree() {
    makeEmpty();
}

template <class EType>
bool BinarySearchTree<EType>::isEmpty() const {
    return root == NULL;
}

template <class EType>
void BinarySearchTree<EType>::makeEmpty() {
    makeEmpty(root);
}

template <class EType>
const EType& BinarySearchTree<EType>::findMin() const {
    return elementAt(findMin(root));
}

template <class EType>
const EType& BinarySearchTree<EType>::findMax() const {
    return elementAt(findMax(root));
}

template <class EType>
const EType& BinarySearchTree<EType>::find(const EType& x) const {
    return elementAt(find(x, root));
}

template <class EType>
void BinarySearchTree<EType>::insert(const EType& x) {
    insert(x, root);
}

template <class EType>
void BinarySearchTree<EType>::remove(const EType& x) {
    remove(x, root);
}

template <class EType>
void BinarySearchTree<EType>::printTree() const {
    if (isEmpty())
        cout << "Empty tree" << endl;
    else
        printTree(root);
}

template <class EType>
const BinarySearchTree<EType>& BinarySearchTree<EType>::operator=(const BinarySearchTree<EType>& rhs) {
    if (this != &rhs) {
        makeEmpty();
        root = clone(rhs.root);
    }
    return *this;
}

template <class EType>
const EType& BinarySearchTree<EType>::elementAt(BinaryNode<EType>* t) const {
    return (t == NULL) ? ITEM_NOT_FOUND : t->element;
}

template <class EType>
void BinarySearchTree<EType>::insert(const EType& x, BinaryNode<EType>*& t) const {
    if (t == NULL)
        t = new BinaryNode<EType>(x, NULL, NULL);
    else if (x < t->element)
        insert(x, t->left);
    else if (t->element < x)
        insert(x, t->right);
}

template <class EType>
void BinarySearchTree<EType>::remove(const EType& x, BinaryNode<EType>*& t) const {
    if (t == NULL) return;
    if (x < t->element)
        remove(x, t->left);
    else if (t->element < x)
        remove(x, t->right);
    else if (t->left != NULL && t->right != NULL) {
        t->element = findMin(t->right)->element;
        remove(t->element, t->right);
    } else {
        BinaryNode<EType>* oldNode = t;
        t = (t->left != NULL) ? t->left : t->right;
        delete oldNode;
    }
}

template <class EType>
BinaryNode<EType>* BinarySearchTree<EType>::findMin(BinaryNode<EType>* t) const {
    if (t == NULL)
        return NULL;
    else if (t->left == NULL)
        return t;
    return findMin(t->left);
}

template <class EType>
BinaryNode<EType>* BinarySearchTree<EType>::findMax(BinaryNode<EType>* t) const {
    if (t != NULL)
        while (t->right != NULL)
            t = t->right;
    return t;
}

template <class EType>
BinaryNode<EType>* BinarySearchTree<EType>::find(const EType& x, BinaryNode<EType>* t) const {
    if (t == NULL)
        return NULL;
    else if (x < t->element)
        return find(x, t->left);
    else if (t->element < x)
        return find(x, t->right);
    else
        return t;
}

template <class EType>
void BinarySearchTree<EType>::makeEmpty(BinaryNode<EType>*& t) const {
    if (t != NULL) {
        makeEmpty(t->left);
        makeEmpty(t->right);
        delete t;
        t = NULL;
    }
}

template <class EType>
void BinarySearchTree<EType>::printTree(BinaryNode<EType>* t) const {
    if (t != NULL) {
        printTree(t->left);
        cout << t->element << " ";
        printTree(t->right);
    }
}

template <class EType>
BinaryNode<EType>* BinarySearchTree<EType>::clone(BinaryNode<EType>* t) const {
    if (t == NULL)
        return NULL;
    else
        return new BinaryNode<EType>(t->element, clone(t->left), clone(t->right));
}

#endif // BINARY_SEARCH_TREE_H

int main() {
    BinarySearchTree<int> bst(-1); // -1 is used for ITEM_NOT_FOUND

    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(2);
    bst.insert(8);

    cout << "Inorder traversal: ";
    bst.printTree();
    cout << endl;

    cout << "Min: " << bst.findMin() << endl;
    cout << "Max: " << bst.findMax() << endl;

    bst.remove(5);
    cout << "After removing 5: ";
    bst.printTree();
    cout << endl;

    return 0;
}

