#include<iostream>
using namespace std;

class Queue{
    int *a, n, cs, f, e;
public:
    Queue(int s = 5){
        a = new int[s];
        n = s;
        cs = 0;
        f = 0;
        e = n - 1;
    }

    void push(int d){
        if(cs < n){
            e = (e + 1) % n;
            a[e] = d;
            cs++;
        }
        else{
            cout << "Over Flow\n";
        }
    }

    void pop(){
        if(cs > 0){
            f = (f + 1) % n;
            cs--;
        }
        else{
            cout << "Under FLow \n";
        }
    }

    bool empty(){
        return cs == 0;
    }

    int size(){
        return cs;
    }

    int front(){
        return a[f];
    }
};

void print(Queue q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    // Queue q(100);  By this we can define queue size as our need but by default its size is 5.
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(10);
    
    print(q);

    return 0;
}