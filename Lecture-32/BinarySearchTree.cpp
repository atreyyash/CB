#include<iostream>
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

    return 0;
}