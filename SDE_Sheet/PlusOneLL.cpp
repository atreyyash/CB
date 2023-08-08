#include<iostream>
using namespace std;

class node{
public:
    int val;
    node *next;

    node(int d){
        val = d;
        next=NULL;
    }
};

void printLL(node *head){
    while(head != NULL){
        cout << head->val << " --> ";
        head = head->next;
    }
    cout << endl;
}

void InsertAtEnd(node *&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    else{
        node *n = new node(d);
        node *temp = head;
        while(temp -> next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
        return;
    }
}

node *reverse(node *p, node *c){
    if(c == NULL){
        return p;
    }
    node *n = c->next;
    c->next = p;
    return reverse(c, n);
}

void plusOneLL(node *&head){
    if(head == NULL){
        return;
    }
    head = reverse(NULL, head);
    int carry = 0;
    node *temp = head;
    int val = temp->val + 1;
    if (val > 9)
    {
        temp->val = 0;
        carry = 1;
    }
    else{
        temp->val = val;
    }
    temp = temp->next;
    while(temp != NULL){
        if(carry != 0){
            val = temp->val + carry;
            if(val > 9){
                carry = 1;
                temp->val= 0;
            }
            else{
                temp->val = val;
                carry = 0;
            }
        }
        temp = temp->next;
    }

    if(carry == 1){
        InsertAtEnd(head, carry);
    }

    head = reverse(NULL, head);
}

int main() {

    int n;
    cin >> n;
    node *head = NULL;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        InsertAtEnd(head, a);
    }

    printLL(head);
    plusOneLL(head);
    printLL(head);

    return 0;
}