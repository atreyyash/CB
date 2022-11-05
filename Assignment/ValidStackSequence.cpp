#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution
{
public:
    bool solve(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> st;
        int currentIndexOfPopped = 0;
        for (int i = 0; i < pushed.size(); i++)
        {
            st.push(pushed[i]);
            if (popped[currentIndexOfPopped] == st.top())
            {
                currentIndexOfPopped++;
                st.pop();
                while (!st.empty() && popped[currentIndexOfPopped] == st.top())
                {
                    currentIndexOfPopped++;
                    st.pop();
                }
            }
        }
        while (currentIndexOfPopped < popped.size())
        {
            if (popped[currentIndexOfPopped] == st.top())
            {
                currentIndexOfPopped++;
                st.pop();
            }
            else
            {
                break;
            }
        }
        return st.empty();
    }
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        Solution s;
        bool flag = s.solve(pushed, popped);
        return flag;
    }
};
int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int b;
    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v1.push_back(b);
    }
    Solution ob;
    if (ob.validateStackSequences(v, v1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}