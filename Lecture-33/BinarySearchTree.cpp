#include<iostream>
#include<algorithm>
#include<cmath>
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

class Pair{
public:
    int height;
    bool balenced;
};

node *insertInBST(node *root, int data){
    if(!root){
        root = new node(data);
        return root;
    }

    if(root -> data >= data){
        root->left = insertInBST(root -> left, data);
    }
    else{
        root->right = insertInBST(root -> right, data);
    }
    return root;
}

node *createBST(){
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    node *root = NULL;
    while(data != -1){
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

void printRange(node *root, int k1, int k2){
    // Base Case
    if(root == NULL){
        return;
    }
    // Recursive Case
    printRange(root -> left, k1, k2);
    if(root -> data >= k1 && root -> data <= k2)
        cout << root->data << " ";
    printRange(root -> right, k1, k2);
}

node* searchBST(node *root, int key){
    // Base Case
    if(!root){
        return NULL;
    }
    // Recursive Case
    if(root -> data == key){
        return root;
    }
    else if(root -> data > key){
        return searchBST(root -> left, key);
    }
    else{
        return searchBST(root -> right, key);
    }
}

Pair isBalenced(node* root){
    // Base Case
    Pair p;
    if(!root){
        p.height = 0;
        p.balenced = true;
        return p;
    }
    // Recursive Case
    Pair left = isBalenced(root -> left);
    Pair right = isBalenced(root -> right);

    p.height = max(left.height, right.height) + 1;

    if(left.balenced && right.balenced && abs(left.height - right.height) <= 1){
        p.balenced = true;
    }
    else{
        p.balenced = false;
    }
    return p;
}

// mi and mx are range in which root -> data will lie and not the value.
bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX){
    // Base Case
    if(!root){
        return true;
    }
    // Recursive Case
    if(root -> data >= mi && root -> data <= mx &&
        isBST(root -> left, mi, root -> data) &&
        isBST(root -> right, root -> data, mx)
        ){
        return true;
    }
    return false;
}

int main() {
    node *root = createBST();

    cout << "Pre Order : ";
    preOrder(root);
    cout << endl;

    cout << "In Order : ";
    inOrder(root);
    cout << endl;

    cout << "Post Order : ";
    postOrder(root);
    cout << endl;

    cout << "In Range print : ";
    printRange(root, 4, 10);
    cout << endl;

    node *ans = searchBST(root, 6);
    if(ans){
        cout << ans->data << endl;
    }
    else{
        cout << "Key Not Found!\n";
    }

    Pair p = isBalenced(root);
    if(p.balenced){
        cout << "Balenced Hai" << endl;
    }
    else{
        cout << "Balenced nahi hai" << endl;
    }

    if(isBST(root)){
        cout << "Tree is BST\n";
    }
    else{
        cout << "Tree is not BST\n";
    }

    return 0;
}