#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void solve(vector<int> &candidates, int target, int s, vector<int> &v)
    {
        //         Base Case
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }
        if (target < 0)
        {
            return;
        }
        //         Recursive Case
        for (int i = s; i < candidates.size(); i++)
        {
            // if(target >= candidates[i]){
            if (i == s || candidates[i] != candidates[i - 1])
            {
                v.push_back(candidates[i]);
                solve(candidates, target - candidates[i], i + 1, v);
                v.pop_back();
            }
            // }
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, 0, v);
        return ans;
    }
};