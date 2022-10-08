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

////////////////////////Merge Sort LL //////////////////////////////
Node *MergeSort(Node *head)
{
    // Base Case
    // if(head == NULL || head->next == NULL)
    if (!head || !head->next)
    {
        return head;
    }
    // Recursive Case
    // 1. Divide
    Node *m = midLL(head);
    Node *b = m->next;
    Node *a = head;
    m->next = NULL;

    // 2. Sort
    a = MergeSort(a);
    b = MergeSort(b);

    // 3. Merge
    Node *nh = MergeTwoSortedLL(a, b);
    return nh;
}
////////////////////////Merge Sort LL //////////////////////////////

/////////////////////// BUBBLE SORT LL /////////////////////////////
void BubbleSort(Node *&head)
{
    int len = Length(head);
    for (int i = 0; i < len - 1; i++)
    {
        Node *c = head;
        Node *p = NULL;
        while (c != NULL && c->next != NULL)
        {
            Node *n = c->next;
            if (c->d > n->d)
            {
                // Swapping Hogi
                if (p == NULL)
                {
                    // Head change hoga
                    c->next = n->next;
                    n->next = c;
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
/////////////////////// BUBBLE SORT LL /////////////////////////////

/////////////////////// BREAK CYCLE LL ////////////////////////////
void breakCycle(Node *head, Node *fast)
{
    Node *slow = head;
    Node *temp = head;
    while (temp->next != fast)
    {
        temp = temp->next;
    }
    while (fast != slow)
    {
        temp = fast;
        fast = fast->next;
        slow = slow->next;
    }
    temp->next = NULL;
}
/////////////////////// BREAK CYCLE LL ////////////////////////////

/////////////////////// CYCLE DETECTION LL /////////////////////////
bool isCyclic(Node *head)
{
    Node *f = head;
    Node *s = head;
    while (f && f->next)
    {
        f = f->next->next;
        s = s->next;
        if (s == f)
        {
            breakCycle(head, f);
            return true;
        }
    }
    return false;
}
/////////////////////// CYCLE DETECTION LL /////////////////////////

void createCycle(Node *head, Node *tail)
{
    tail->next = head->next->next->next;
}

int main()
{
    Node *head = NULL, *tail = NULL; // Pointers head and tail are the pointers of linked list
    // head points to the starting point of linked list
    // tail points at the end node of linked list

    InsertAtEnd(head, tail, 10);
    InsertAtEnd(head, tail, 3);
    InsertAtEnd(head, tail, 15);
    InsertAtEnd(head, tail, 6);
    InsertAtEnd(head, tail, 8);
    InsertAtEnd(head, tail, 1);
    InsertAtEnd(head, tail, 5);

    print(head);
    createCycle(head, tail);
    isCyclic(head);
    print(head);
    // if (isCyclic(head))
    // {
    //     cout << "Print Mat kar be! Cycle hai";
    // }
    // else
    // {
    //     print(head);
    // }

    // head = MergeSort(head);
    // BubbleSort(head);

    // print(head);

    return 0;
}