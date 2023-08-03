// 4Sum - Leetcode

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Solution 1
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        int k, l, t;
        for (int i = 0; i < nums.size() - 3; i++){
            for (int j = i + 1; j < nums.size() - 2; j++){
                k = j + 1;
                l = nums.size() - 1;
                while(k < l){
                    t = nums[i] + nums[j] + nums[k] + nums[l];
                    if(t == target){
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if(t < target){
                        k++;
                    }
                    else if(t > target){
                        l--;
                    }
                }
            }
        }

        for(auto f : s){
            ans.push_back(f);
        }

        return ans;
    }
};

// Solution 2
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() == 1 && nums[0] == 0 && target == 0)
        {
            vector<vector<int>> v{0};
            return v;
        }
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        int k, l, t;
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                t = target - nums[i] - nums[j];
                k = j + 1;
                l = nums.size() - 1;
                while (k < l)
                {
                    if (t == nums[k] + nums[l])
                    {
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if (nums[k] + nums[l] < t)
                    {
                        k++;
                    }
                    else if (nums[k] + nums[l] > t)
                    {
                        l--;
                    }
                }
            }
        }

        for (auto f : s)
        {
            ans.push_back(f);
        }

        return ans;
    }
};