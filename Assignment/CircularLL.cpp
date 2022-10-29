#include<iostream>
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

void breakCycle(node *head, node*fast){
    node *slow = head;
    node *prev = head;
    while(prev -> next != fast){
        prev = prev->next;
    }
    while(fast != slow){
        prev = fast;
        fast = fast->next;
        slow = slow->next;
    }
    prev->next = NULL;
}

void isCyclic(node *head){
    node *slow = head;
    node *fast = head;
    while(fast && fast -> next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            breakCycle(head, fast);
            return;
        }
    }
}

node* isPresent(node *head, int a){
    while (head != NULL)
    {
        if(a == head -> data){
            return head;
        }
        head = head->next;
    }
    return NULL;
}

int main() {
    node *head = NULL, *tail = NULL;
    int a;
    cin >> a;
    while(a != -1){
        node *tmp = isPresent(head, a);
        if (tmp == NULL)
        {
            InsertAtEnd(head, tail, a);
        }
        else{
            tail->next = tmp;
        }
        cin >> a;
    }
    isCyclic(head);
    print(head);

    return 0;
}