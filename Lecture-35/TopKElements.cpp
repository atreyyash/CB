#include<iostream>
#include<queue>
#include<functional>
using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int>> q){
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
}

int main()
{
    // k = 3
    int data, k = 3, cnt = 0;
    // 1 2 3 0 0 -1 4 0 0 0 -1 67 8 -1 -4 -5 -6 -1
    // 1st Time: 1 2 3
    // 2nd Time: 2 3 4
    // 3rd Time: 6 7 8
    // 4th Time: 6 7 8
    priority_queue<int, vector<int>, greater<int>> q;
    while(1){

        cin >> data;
        
        if(data == -1){
            // print top k elements till now from start
            printQueue(q);
        }
        else{
            if(cnt < k){
                q.push(data);
                cnt++;
            }
            else{
                if(data > q.top()){
                    q.pop();
                    q.push(data);
                }
            }
        }
    }

    return 0;
}