#include<iostream>
#include<queue>
#include<string>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* createTree(){
    int data;
    cin >> data;
    node *root = new node(data);
    string l;
    cin >> l;
    if(l == "true"){
        root->left = createTree();
    }
    else{
        root -> left = NULL;
    }
    cin >> l;
    if(l == "true"){
        root->right = createTree();
    }
    else{
        root -> right = NULL;
    }
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        if (f != NULL)
        {
            cout << f->data << " ";
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        else
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
    }
}

int SumOfNodes(node* root){
    // Base Case
    if(root == NULL){
        return 0;
    }
    // Recursive Case
    return SumOfNodes(root->left) + SumOfNodes(root->right) + root->data;
}

int main() {
    node *root = createTree();
    levelOrderTraversal(root);
    int res = SumOfNodes(root);
    cout << res << endl;

    return 0;
}