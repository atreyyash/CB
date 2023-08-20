#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void solve(vector<int> &candidates, int target, vector<int> v, int s){
        // Base Case 
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0 ){
            return;
        }
        // Recursive Case
        for (int i = s; i < candidates.size(); i++){
            if(i == s || candidates[i] != candidates[i - 1]){
                v.push_back(candidates[i]);
                solve(candidates , target - candidates[i], v, i+1 );
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, v, 0);
        return ans;
    }
};