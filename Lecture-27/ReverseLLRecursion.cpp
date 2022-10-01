#include "LinkedList.cpp"

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