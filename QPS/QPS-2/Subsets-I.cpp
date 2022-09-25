#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    //     output ko by value pass kiya hai isiliye backtracking ki need nahi padh rahi hai aur
    //     by value me TLE aa sakti hai bcz usme memory zyada use hogi bcz har barr naya output
    //     vector ban raha h agar by reference pass karenge toh backtracking karni padegi
    //     include karne par push_back karne baad call ke baad pop_back karna padega
    void solve(vector<int> &in, vector<int> &out, vector<vector<int>> &ans, int i)
    {
        //         Base Case
        if (i == in.size())
        {
            // out.push_back(in[i]);
            ans.push_back(out);
            return;
        }
        //         Recursive Case
        solve(in, out, ans, i + 1);

        out.push_back(in[i]);
        solve(in, out, ans, i + 1);
        out.pop_back();
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;

        vector<int> out;
        solve(nums, out, ans, 0);
        return ans;
    }
};