#include "LinkedList.cpp"

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

int main(){
    Node *head = NULL, *tail = NULL;
    Node *head1 = NULL, *tail1 = NULL;

    InsertAtEnd(head, tail, 1);
    InsertAtEnd(head, tail, 3);
    InsertAtEnd(head, tail, 5);
    InsertAtEnd(head, tail, 6);
    InsertAtEnd(head, tail, 8);

    InsertAtEnd(head1, tail1, 2);
    InsertAtEnd(head1, tail1, 4);
    InsertAtEnd(head1, tail1, 7);
    InsertAtEnd(head1, tail1, 9);
    InsertAtEnd(head1, tail1, 10);

    print(head);
    print(head1);

    head = MergeTwoSortedLL(head, head1);
    print(head);
}