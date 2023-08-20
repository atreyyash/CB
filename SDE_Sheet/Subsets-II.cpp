#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    set<vector<int>> s;
    void subsets(vector<int> &nums, vector<int> &out, int i)
    {
        // Base case
        if (i == nums.size())
        {
            s.insert(out);
            return;
        }
        // Recursive Case
        subsets(nums, out, i + 1);

        out.push_back(nums[i]);
        subsets(nums, out, i + 1);
        out.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> out;
        sort(nums.begin(), nums.end());
        subsets(nums, out, 0);
        for (auto x : s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};