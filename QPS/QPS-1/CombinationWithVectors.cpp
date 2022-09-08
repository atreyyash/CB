#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int n, int k, vector<int> &v, int s)
    {
        //         Base Case
        if (k == 0)
        {
            ans.push_back(v);
            return;
        }
        //         Recursive Case
        for (int i = s; i <= n; i++)
        {
            v.push_back(i);
            solve(n, k - 1, v, i + 1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> v;
        solve(n, k, v, 1);
        return ans;
    }
};