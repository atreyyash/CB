#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &in, vector<int> &out, vector<vector<int>> &ans, int i)
    {
        ans.push_back(out);

        if (i == in.size())
        {
            return;
        }

        for (int j = i; j < in.size(); j++)
        {
            if (j != i && in[j] == in[j - 1])
            {
                continue;
            }
            else
            {
                out.push_back(in[j]);
                solve(in, out, ans, j + 1);
                out.pop_back();
            }
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> out;
        solve(nums, out, ans, 0);
        return ans;
    }
};