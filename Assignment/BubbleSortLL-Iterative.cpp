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

void BubbleSort(node *&head)
{
    int n = length(head);
    for (int i = 0; i < n - 1; i++)
    {
        node *p = NULL;
        node *c = head;
        while (c != NULL && c->next != NULL)
        {
            node *n = c->next;
            if (c->data > n->data)
            {
                // Swapping hogi
                if (p == NULL)
                {
                    // Head change hoga
                    c->next = n->next;
                    n->next = c;
                    head = n;
                    p = head = n;
                }
                else
                {
                    // Head change nahi hoga
                    c->next = n->next;
                    n->next = c;
                    p->next = n;
                    p = n;
                }
            }
            else
            {
                // Swapping nahi hogi
                p = c;
                c = n;
            }
        }
    }
}

int main()
{
    node *head = NULL, *tail = NULL;

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, tail, a);
    }
    BubbleSort(head);
    print(head);

    return 0;
}