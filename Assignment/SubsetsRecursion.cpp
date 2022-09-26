#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int> v1, vector<int> v2)
{
    if (v1.size() < v2.size())
    {
        return true;
    }
    else if (v1.size() == v2.size() && v1[0] <= v2[0])
    {
        // cout << "compared!";
        return true;
    }
    return false;
}

vector<vector<int>> ans;
void Subsets(vector<int> &nums, vector<int> &out, int i)
{
    // Base Case
    if (i == nums.size())
    {
        vector<int> res(out);
        reverse(res.begin(), res.end());
        ans.push_back(res);
        return;
    }
    // Recursive Case

    // Not Included
    Subsets(nums, out, i + 1);

    // Included
    out.push_back(nums[i]);
    Subsets(nums, out, i + 1);
    out.pop_back();
}

int main()
{
    int k, tar = 0;
    vector<int> out;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    Subsets(nums, out, 0);
    sort(ans.begin(), ans.end(), cmp);
    for (int i = 0; i < ans.size(); i++)
    {
        tar = 0;
        for (int j = 0; j < ans[i].size(); j++)
        {
            tar = tar + ans[i][j];
        }
        if (tar == k)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}