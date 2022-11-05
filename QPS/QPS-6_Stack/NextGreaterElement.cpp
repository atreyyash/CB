#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &a)
    {
        stack<int> s;
        vector<int> ng(a.size());

        for (int i = 0; i < a.size(); i++)
        {
            // if (s.empty() || a[s.top()] > a[i])
            // {
            //     s.push(i);
            // }
            // else{
            //     while(!s.empty() && a[s.top()] < a[i]){
            //         ng[s.top()] = i;
            //     }
            //     s.push(i);
            // }
            while (!s.empty() && a[s.top()] < a[i])
            {
                ng[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ng[s.top()] = -1;
            s.pop();
        }


        return ng;
    }
};