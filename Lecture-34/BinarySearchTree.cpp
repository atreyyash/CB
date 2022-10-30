#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

class Pair
{
public:
    int height;
    bool balenced;
};

node *insertInBST(node *root, int data)
{
    if (!root)
    {
        root = new node(data);
        return root;
    }

    if (root->data >= data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *createBST()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = NULL;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
    return root;
}

void preOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Recursive Case
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Recursive Case
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Recursive Case
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void printRange(node *root, int k1, int k2)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Recursive Case
    printRange(root->left, k1, k2);
    if (root->data >= k1 && root->data <= k2)
        cout << root->data << " ";
    printRange(root->right, k1, k2);
}

node *searchBST(node *root, int key)
{
    // Base Case
    if (!root)
    {
        return NULL;
    }
    // Recursive Case
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchBST(root->left, key);
    }
    else
    {
        return searchBST(root->right, key);
    }
}

Pair isBalenced(node *root)
{
    // Base Case
    Pair p;
    if (!root)
    {
        p.height = 0;
        p.balenced = true;
        return p;
    }
    // Recursive Case
    Pair left = isBalenced(root->left);
    Pair right = isBalenced(root->right);

    p.height = max(left.height, right.height) + 1;

    if (left.balenced && right.balenced && abs(left.height - right.height) <= 1)
    {
        p.balenced = true;
    }
    else
    {
        p.balenced = false;
    }
    return p;
}

// mi and mx are range in which root -> data will lie and not the value.
bool isBST(node *root, int mi = INT_MIN, int mx = INT_MAX)
{
    // Base Case
    if (!root)
    {
        return true;
    }
    // Recursive Case
    if (root->data >= mi && root->data <= mx &&
        isBST(root->left, mi, root->data) &&
        isBST(root->right, root->data, mx))
    {
        return true;
    }
    return false;
}

node *createBalencedBST(int *a, int s, int e){
    // Base Case
    if(s > e){
        return NULL;
    }
    // Recursive Case
    int m = (s + e) / 2;
    node *root = new node(a[m]);
    root->left = createBalencedBST(a, s, m - 1);
    root->right = createBalencedBST(a, m + 1, e);
    return root;
}

class LinkedList{
public:
    node *head, *tail;
};

LinkedList BSTtoLL(node *root){
    LinkedList l;
    // Base Case
    if(!root){
        l.head = l.tail = NULL;
        return l;
    }
    // Recursive Case
    if(root -> left && root -> right){ // When both right and left child exist of root
        LinkedList left = BSTtoLL(root -> left);
        LinkedList right = BSTtoLL(root -> right);
        left.tail -> right = root;
        root->right = right.head;
        l.head = left.head;
        l.tail = right.tail;
        return l;
    }
    else if(root -> left && !root -> right){ // when only left child exists
        LinkedList left = BSTtoLL(root -> left);
        left.tail -> right = root;
        l.head = left.head;
        l.tail = root;
        return l;
    }
    else if(!root -> left && root -> right){ // When only right child exists
        LinkedList right = BSTtoLL(root -> right);
        root->right = right.head;
        l.head = root;
        l.tail = right.tail;
    }
    else{   // When 
        l.head = l.tail = root;
        return l;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 10};
    int n = sizeof(a) / sizeof(int);

    node *root = createBalencedBST(a, 0, n - 1);

    cout << "Pre Order : ";
    preOrder(root);
    cout << endl;

    cout << "In Order : ";
    inOrder(root);
    cout << endl;

    cout << "Post Order : ";
    postOrder(root);
    cout << endl;

    Pair p = isBalenced(root);
    if (p.balenced)
    {
        cout << "Balenced Hai" << endl;
    }
    else
    {
        cout << "Balenced nahi hai" << endl;
    }

    LinkedList l = BSTtoLL(root);
    node *head = l.head;
    cout << "LinkedList : ";
    while(head){
        cout << head->data << " --> ";
        head = head->right;
    }
    cout << "NULL";

    return 0;
}