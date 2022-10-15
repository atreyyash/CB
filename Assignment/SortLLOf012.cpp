#include<iostream>
#include<stack>
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

void Sort012(node *head){
    stack<int> s0, s1, s2;
    node *temp = head;
    while(temp != NULL){
        if(temp -> data == 0){
            s0.push(temp -> data);
        }
        else if(temp -> data == 1){
            s1.push(temp->data);
        }
        else{
            s2.push(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    while(!s0.empty()){
        temp->data = s0.top();
        s0.pop();
        temp = temp->next;
    }
    while (!s1.empty())
    {
        temp->data = s1.top();
        s1.pop();
        temp = temp->next;
    }
    while (!s2.empty())
    {
        temp->data = s2.top();
        s2.pop();
        temp = temp->next;
    }
}

int main() {
    node *head = NULL, *tail = NULL;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, tail, a);
    }
    Sort012(head);
    print(head);

    return 0;
}