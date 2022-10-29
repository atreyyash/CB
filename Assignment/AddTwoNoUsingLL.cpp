#include<iostream>
#include<algorithm>
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

void sum(node* &head1, node* &tail1, node* &head2, node* &tail2){
    node *t1 = head1;
    node *t2 = head2;
    int c = 0;
    if(length(t1) < length(t2)){
        swap(t1, t2);
        swap(head1, head2);
        swap(tail1, tail2);
    }
    while(t2){
        t1->data = t1->data + t2->data + c;
        c = t1->data / 10;
        t1->data %= 10;
        t1 = t1->next;
        t2 = t2->next;
    }
    while(t1){
        t1->data += c;
        c = t1->data / 10;
        t1->data %= 10;
        t1 = t1->next;
    }
    if(c > 0){
        InsertAtEnd(head1, tail1, c);
    }
}

int main() {
    node *head1 = NULL, *tail1 = NULL;
    node *head2 = NULL, *tail2 = NULL;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head1, tail1, a);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        InsertAtEnd(head2, tail2, a);
    }
    sum(head1, tail1, head2, tail2);
    print(head1);

    return 0;
}