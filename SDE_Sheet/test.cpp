#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
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

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	int target;
	cin >> target;

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	vector<vector<int>> ans = fourSum(v, target);
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[0].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}