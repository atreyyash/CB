#include "LinkedList.cpp"

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