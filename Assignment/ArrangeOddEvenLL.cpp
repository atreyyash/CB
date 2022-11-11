#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void InsertAtEnd(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        head = tail = new node(d);
    }
    else
    {
        node *n = new node(d);
        tail->next = n;
        tail = n;
    }
}

void arrangeOddEven(node* &head){
    node *c = head;
    node *n = c->next, *nn = n->next;
    node *head2 = head->next;

    while (nn != NULL)
    {
        // cout << "c at " << c->data << endl;
        // cout << "n at " << n->data << endl;
        // cout << "nn at " << nn->data << endl;
        c->next = nn;
        c = n;
        n = c->next;
        nn = n->next;
        // cout << "c at " << c->data << endl;
        // cout << "n at " << n->data << endl;
        // cout << "nn at " << nn->data << endl;
    }
    c->next = head2;
    n->next = nn;
}

int main() {
    node *head = NULL, *tail = NULL;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, tail, a);
    }
    cout << "Original List: ";
    print(head);
    cout << endl;
    arrangeOddEven(head);
    cout << "Modified List: ";
    print(head);
    cout << endl;

    return 0;
}