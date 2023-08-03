// 189. Rotate Array

#include<iostream>
#include<vector>
using namespace std;

// Solution 1
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// Solution 2
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        vector<int> temp;
        for (int i = nums.size() - k; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
        }

        for (int i = nums.size() - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < temp.size(); i++)
        {
            nums[i] = temp[i];
        }
    }
};