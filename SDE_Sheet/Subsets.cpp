#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> ans;

void subsets(vector<int> &nums, vector<int> &out, int i){
    // Base case
    if(i == nums.size()){
        int res = 0;
        for (int j = 0; j < out.size(); j++)
        {
            res += out[j];
        }
        ans.push_back(res);
        return;
    }
    // Recursive Case
    subsets(nums, out, i + 1);

    out.push_back(nums[i]);
    subsets(nums, out, i + 1);
    out.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> out({0});
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << " ";
    }
    cout << endl;
    subsets(nums, out, 0);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}