#include<iostream>
using namespace std;

// Input :- 8 10 1 -1 -1 6 4 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
class node {
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node *createTree(){
    // Base Case
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    // Recursive Case
    node *root = new node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

void preOrder(node *root){
    // Base Case
    if(root == NULL){
        return;
    }
    // Recursive Case
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root -> right);
}

void inOrder(node *root){
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

void postOrder(node *root){
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
    node *root = createTree();

    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;

    return 0;
}