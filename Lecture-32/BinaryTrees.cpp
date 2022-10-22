// NOTE ::- IF YOU WANT TO RUN THIS CODE IN TERMINAL THAN RUN THIS CODE AS BinaryTrees < input.exe (Benifit- Don't need to type input again and again)
#include <iostream>
#include <algorithm>
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
        left = right = NULL;
    }
};

class Pair
{
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

int countNode(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return 0;
    }
    // Recursive Case
    // int l = countNode(root -> left);
    // int r = countNode(root -> right);
    return countNode(root->left) + countNode(root->right) + 1;
}

int Height(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return 0;
    }
    // Recursive Case
    return max(Height(root->left), Height(root->right)) + 1;
}

int diameter(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return 0;
    }
    // Recursive Case
    int op1 = Height(root->left) + Height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

node *find(node *root, int key)
{
    // Base Case
    if (!root)
        return NULL;

    if (root->data == key)
    {
        return root;
    }

    node *ans = find(root->left, key);
    if (ans)
    {
        return ans;
    }

    return find(root->right, key);
}

void mirror(node *root)
{
    if (!root)
        return;

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

void levelOrder(node *root)
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

node *BuildLevelWise()
{
    int data;
    cout << "Enter root data : ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        cout << "Enter data for " << f->data << ": ";
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

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
int k = 0;

node *BuildPreIn(int *in, int s, int e)
{
    // Base Case
    if (s > e)
        return NULL;
    // Recursive Case
    node *root = new node(pre[k++]);
    int i = -1;
    for (int j = s; j <= e; j++)
    {
        if (in[j] == root->data)
        {
            i = j;
            break;
        }
    }
    root->left = BuildPreIn(in, s, i - 1);
    root->right = BuildPreIn(in, i + 1, e);

    return root;
}

int main()
{
    // node *root = BuildLevelWise();
    node *root = BuildPreIn(in, 0, 8);

    preOrder(root);
    cout << endl;
    mirror(root);
    cout << "Pre Order : ";
    preOrder(root);
    cout << endl;

    cout << "In Order : ";
    inOrder(root);
    cout << endl;

    cout << "Post Order : ";
    postOrder(root);
    cout << endl;

    cout << "Level Order : " << endl;
    levelOrder(root);
    cout << endl;

    return 0;
}