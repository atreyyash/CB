// NOTE ::- IF YOU WANT TO RUN THIS CODE IN TERMINAL THAN RUN THIS CODE AS BinaryTrees < input.exe (Benifit- Don't need to type input again and again)
#include<iostream>
#include<algorithm>
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

class Pair {
public:
    int h;
    int d;
};

node *createTree()
{
    // Base Case
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // Recursive Case
    node *root = new node(data);
    root->left = createTree();
    root->right = createTree();
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

int countNode(node *root){
    // Base Case
    if(root == NULL){
        return 0;
    }
    // Recursive Case
    // int l = countNode(root -> left);
    // int r = countNode(root -> right);
    return countNode(root -> left) + countNode(root -> right) + 1;
}

int Height(node *root){
    // Base Case
    if(root == NULL){
        return 0;
    }
    // Recursive Case
    return max(Height(root -> left), Height(root -> right)) + 1;
}

int diameter(node *root){
    // Base Case
    if(root == NULL){
        return 0;
    }
    // Recursive Case
    int op1 = Height(root->left) + Height(root -> right);
    int op2 = diameter(root -> left);
    int op3 = diameter(root -> right);
    return max(op1, max(op2, op3));
}

Pair fastDia(node *root){
    Pair ans;
    // Base Case
    if(root == NULL){   // when root is null i.e tree don't exist hence height and diameter is set to zero
        ans.h = ans.d = 0;
        return ans;
    }
    // Recursive Case
    Pair left = fastDia(root -> left);
    Pair right = fastDia(root -> right);
    ans.h = max(left.h, right.h) + 1; // Max of left subtree and right subtree plus 1;
    int op1 = left.h + right.h; // Diameter through root
    int op2 = left.d;   // Diameter of left subtree
    int op3 = right.d;  // Diameter of right subtree
    ans.d = max(op1, max(op2, op3));    // max of al 3 options
    return ans;
}

node *find(node *root, int key){
    // Base Case
    if(!root)
        return NULL;
    
    if(root -> data == key){
        return root;
    }

    node *ans = find(root->left, key);
    if(ans){
        return ans;
    }    
    
    return find(root -> right, key);
}

int main() {

    node *root = createTree();

    cout << "Pre Order : ";
    preOrder(root);
    cout << endl;

    cout << "No of Nodes : " << countNode(root) << endl;
    // cout << "Height : " << Height(root) << endl;
    // cout << "Diameter : " << diameter(root) << endl;
    Pair ans = fastDia(root);
    cout << "Height by fastDia : " << ans.h << endl;
    cout << "Diameter by fastDia : " << ans.d << endl;

    node *res = find(root, 14);
    cout << "Key Found! : " << res->data << endl;

    return 0;
}