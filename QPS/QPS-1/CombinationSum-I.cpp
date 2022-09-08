#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void solve(vector<int> &candidates, int target, vector<int> &v, int s)
    {
        //         Base Case
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }
        //         Recursive Case
        for (int i = s; i < candidates.size(); i++)
        {
            if (target >= candidates[i])
            {
                v.push_back(candidates[i]);
                solve(candidates, target - candidates[i], v, i);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> v;
        solve(candidates, target, v, 0);
        return ans;
    }
};