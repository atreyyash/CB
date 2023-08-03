#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int d)
    {
        val = d;
        next = NULL;
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
//     struct ListNode
//     {
//         int val;
//         ListNode *next;
//         ListNode() : val(0), next(nullptr){};
//         ListNode(int x) : val(x), next(nullptr){};
//         ListNode(int x, ListNode *next) : val(x), next(next){};
//     };

// public:
//     void InsertAtEnd(ListNode *&head, int d){
//         if (head == NULL || head -> next == NULL ) return ;
//         ListNode *temp = head;
//         while(temp -> next != NULL){
//             temp=temp->next;
//         }
//         ListNode *n = new ListNode(d);
//         n->next =NULL;
//         temp->next = n;
//     }

//     ListNode* mergeLL(ListNode *&head1, ListNode *&head2){
//         ListNode *h1;
//         h1 = head1;
//         while(h1->next != NULL){
//             h1 = h1->next;
//         }
//         h1->next = head2;
//         return head1;
//     }

//     ListNode *oddEvenList(ListNode *head)
//     {
//         ListNode *oddList = NULL;
//         ListNode *evenList = NULL;
//         // int i = 0;
//         ListNode *temp = head;
//         while(temp != NULL && temp->next != NULL){
//             InsertAtEnd(oddList, temp->val);
//             temp = temp->next->next;
//         }

//         temp = head->next;
//         while(temp != NULL && temp->next != NULL){
//             InsertAtEnd(evenList, temp->val);
//             temp = temp->next->next;
//         }

//         ListNode *nn = mergeLL(oddList, evenList);
//         return nn;
//     }
// };

void printLL(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " --> ";
        head = head->next;
    }
    cout << endl;
}

void InsertAtEnd(ListNode *&head, int d)
{
    if (head == NULL)
    {
        head = new ListNode(d);
    }
    else
    {
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ListNode *n = new ListNode(d);
        n->next = NULL;
        temp->next = n;
    }
}

ListNode *mergeLL(ListNode *&head1, ListNode *&head2)
{
    ListNode *h1 = head1;
    while (h1->next != NULL)
    {
        h1 = h1->next;
    }
    h1->next = head2;
    return head1;
}

ListNode *oddEvenList(ListNode *head)
{
    cout << "I entered here!" << endl;
    ListNode *oddList = NULL;
    ListNode *evenList = NULL;
    // int i = 0;
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        InsertAtEnd(oddList, temp->val);
        temp = temp->next->next;
    }
    if(temp != NULL){
        InsertAtEnd(oddList, temp->val);
    }
    printLL(oddList);
    // delete temp;
    temp = head->next;
    while (temp != NULL && temp->next != NULL)
    {
        InsertAtEnd(evenList, temp->val);
        temp = temp->next->next;
    }
    if(temp != NULL){
        InsertAtEnd(evenList, temp->val);
    }
    printLL(evenList);

    ListNode *nn = mergeLL(oddList, evenList);
    return nn;
}

int main()
{
    int n;
    cin >> n;
    ListNode *head = NULL;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, a);
    }
    printLL(head);
    ListNode *head2 = oddEvenList(head);
    printLL(head2);

    return 0;
}