#include <iostream>
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
//////////////////////////////// Delete In LL ////////////////////////

int main()
{
    Node *head = NULL, *tail = NULL; // Pointers head and tail are the pointers of linked list
    // head points to the starting point of linked list
    // tail points at the end node of linked list
    
    InsertAtFront(head, tail, 1);
    InsertAtFront(head, tail, 2);
    InsertAtFront(head, tail, 3);
    InsertAtFront(head, tail, 4);
    InsertAtFront(head, tail, 5);
    InsertAtEnd(head, tail, 6);
    InsertAtEnd(head, tail, 7);
    InsertAtEnd(head, tail, 8);
    InsertAtEnd(head, tail, 9);
    InsertAtEnd(head, tail, 10);

    cout << "Length : " << Length(head) << endl;
    print(head);

    InsertAtMid(head, tail, 11, 5);

    cout << "Length : " << Length(head) << endl;
    print(head);

    while (head)
    {
        print(head);
        DeleteAtFront(head, tail);
    }

    return 0;
}