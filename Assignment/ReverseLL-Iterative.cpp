#include <iostream>
#include <algorithm>
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

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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

void reverse(node *&head, node *&tail)
{
    node *p = NULL;
    node *c = head;

    while (c != NULL)
    {
        node *n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail);
}

int main()
{
    node *head = NULL, *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        InsertAtEnd(head, tail, a);
    }
    reverse(head, tail);
    print(head);

    return 0;
}