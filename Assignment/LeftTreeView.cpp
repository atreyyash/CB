#include <iostream>
#include <queue>
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
        left = NULL;
        right = NULL;
    }
};

node *InputLevelOrderTree()
{
    int data;
    // cout << "Enter root data :";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    queue<node *> q;
    node *root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        // cout << "Enter child of " << f->data << " : ";
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            f->left = new node(l);
            q.push(f->left);
        }
        if (r != -1)
        {
            f->right = new node(r);
            q.push(f->right);
        }
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

void leftView(node *root, int cl, int *level)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Recursive Case
    if (*level < cl)
    {
        cout << root->data << " ";
        *level = cl;
    }
    leftView(root->left, cl + 1, level);
    leftView(root->right, cl + 1, level);
}

int main()
{
    node *root = InputLevelOrderTree();
    // levelOrderTraversal(root);
    int level = 0;
    leftView(root, 1, &level);
    cout << endl;

    return 0;
}