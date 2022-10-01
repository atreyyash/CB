#include <iostream>
#include <algorithm>
using namespace std;

// Node has two buckets i.e. data and next (pointer to next node)
// Constructor :- it creates a new node with data d and next pointer to null
class Node
{
public:
    int d;
    Node *next;

    Node(int data)
    {
        d = data;
        next = NULL;
    }
};

// If we do not want to make changes to original head than we pass head by value
int Length(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->d << " --> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void InsertAtFront(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *n = new Node(data);
        head = tail = n;
    }
    else
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
}

void InsertAtEnd(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        head = tail = new Node(data);
    }
    else
    {
        Node *n = new Node(data);
        tail->next = n;
        tail = n;
    }
}

void InsertAtMid(Node *head, Node *tail, int data, int pos)
{
    if (pos == 0)
    {
        InsertAtFront(head, tail, data);
    }
    else if (pos >= Length(head))
    {
        InsertAtEnd(head, tail, data);
    }
    else
    {
        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

//////////////////////////////// Delete In LL ////////////////////////
void DeleteAtFront(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void DeleteAtEnd(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }
}

void DeleteAtMid(Node *&head, Node *&tail, int pos)
{
    if (pos == 0)
    {
        DeleteAtFront(head, tail);
    }
    else if (pos >= Length(head) - 1)
    {
        DeleteAtEnd(head, tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *n = temp->next;
        temp->next = n->next;
        delete n;
    }
}
//////////////////////////////// Delete In LL ////////////////////////

////////////////////////////Reverse LL /////////////////////////////
void ReverseLL(Node *&head, Node *&tail)
{
    Node *c = head;
    Node *p = NULL;

    while (c != NULL)
    {
        Node *n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail);
}

void ReverseLLRecursionHelper(Node *c, Node *p)
{
    // Base Case
    if (c == NULL)
    {
        return;
    }
    // Recursive Case
    Node *n = c->next;
    c->next = p;
    ReverseLLRecursionHelper(n, c);
}

void ReverseLLRecursion(Node *&head, Node *&tail)
{
    ReverseLLRecursionHelper(head, NULL);
    swap(head, tail);
}
////////////////////////////Reverse LL /////////////////////////////

/////////////////////////// MergeTwo Sorted LL ///////////////////////////////
// Main of this function is in its sepearate file
Node *MergeTwoSortedLL(Node *h1, Node *h2)
{
    if (h2 == NULL)
    {
        return h1;
    }
    if (h1 == NULL)
    {
        return h2;
    }

    Node *nH = NULL;
    if (h1->d < h2->d)
    {
        nH = h1;
        nH->next = MergeTwoSortedLL(h1->next, h2);
    }
    else
    {
        nH = h2;
        nH->next = MergeTwoSortedLL(h1, h2->next);
    }
    return nH;
}
/////////////////////////// MergeTwo ///////////////////////////////

//////////////////////////Middle of LL ////////////////////////////
Node *midLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
//////////////////////////Middle of LL ////////////////////////////

int main()
{
    Node *head = NULL, *tail = NULL; // Pointers head and tail are the pointers of linked list
    // head points to the starting point of linked list
    // tail points at the end node of linked list

    int n;
    cin >> n;
    int no = 1;
    for (int i = 0; i < n; i++)
    {
        InsertAtEnd(head, tail, no);
        no++;
    }

    cout << "Length : " << Length(head) << endl;
    print(head);

    InsertAtMid(head, tail, 11, 5);

    cout << "Length : " << Length(head) << endl;
    print(head);

    DeleteAtEnd(head, tail);

    print(head);

    DeleteAtMid(head, tail, 3);
    print(head);

    ReverseLL(head, tail);
    print(head);

    ReverseLLRecursion(head, tail);
    print(head);

    Node *Mid = midLL(head);
    cout << Mid->d << endl;

    return 0;
}