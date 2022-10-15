#include <iostream>
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

void InsertAtFront(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = tail = n;
    }
    else
    {
        node *n = new node(d);
        n->next = head;
        head = n;
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
        node *tmp = head;
        while (tmp != tail)
        {
            tmp = tmp->next;
        }
        node *n = new node(d);
        tail->next = n;
        tail = n;
    }
}

node *midLL(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, tail, a);
    }
    node *ans = midLL(head);
    cout << ans->data << endl;

    return 0;
}