// 3Sum - Leetcode

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        int n = nums.size();
        int j, k, target = 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            j = i + 1;
            k = nums.size() - 1;
            while (j < k)
            {
                target = nums[i] + nums[j] + nums[k];
                if (target == 0)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (target > 0)
                {
                    k--;
                }
                else if (target < 0)
                {
                    j++;
                }
            }
        }
        for (auto t : s)
        {
            ans.push_back(t);
        }
        return ans;
    }
};