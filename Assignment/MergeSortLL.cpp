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

node *midLL(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *h1, node *h2)
{
    if (h1 == NULL)
    {
        return h2;
    }
    if (h2 == NULL)
    {
        return h1;
    }

    node *nh = NULL;
    if (h1->data < h2->data)
    {
        nh = h1;
        nh->next = merge(h1->next, h2);
    }
    else
    {
        nh = h2;
        nh->next = merge(h1, h2->next);
    }
    return nh;
}

node *mergeSort(node *&head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // Recursive Case
    // 1. Divide
    node *m = midLL(head);
    node *a = head;
    node *b = m->next;
    m->next = NULL;
    // 2. Sort
    a = mergeSort(a);
    b = mergeSort(b);
    // 3. Merge
    node *nh = merge(a, b);
    return nh;
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
    head = mergeSort(head);
    print(head);

    return 0;
}