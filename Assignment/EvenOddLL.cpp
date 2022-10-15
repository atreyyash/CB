#include <iostream>
#include<queue>
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

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

node *EvenOdd(node *head){
    node *odd = NULL, *oddTail = NULL;
    node *even = NULL, *evenTail = NULL;
    while (head != NULL)
    {
        if(isEven(head -> data)){
            InsertAtEnd(even, evenTail, head -> data);
        }
        else{
            InsertAtEnd(odd, oddTail, head -> data);
        }
        head = head->next;
    }
    oddTail->next = even;
    return odd;
}

void EvenOdd1(node *head){
    queue<int> odd, even;
    node *temp = head;
    while(temp != NULL){
        if(isEven(temp -> data)){
            even.push(temp-> data);
        }
        else{
            odd.push(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    while(!odd.empty()){
        temp->data = odd.front();
        odd.pop();
        temp = temp->next;
    }
    while(!even.empty()){
        temp->data = even.front();
        even.pop();
        temp = temp->next;
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
    EvenOdd1(head);
    print(head);

    return 0;
}
