#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> q;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            if(q.empty())
                q.push_back(i);
            else{
                if(q.front() <= i - k)
                    q.pop_front();
                while(!q.empty() && nums[q.back()] <= nums[i]){
                    q.pop_back();
                }
                q.push_back(i);
            }
            if(i >= k -1){
                ans.push_back(nums[q.front()]);
            }
        }
        return ans;
    }
};
