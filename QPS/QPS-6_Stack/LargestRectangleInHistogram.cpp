#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> s;
        vector<int> next_smaller(heights.size());
        vector<int> prev_smaller(heights.size());
        int n = heights.size();
        for (int i = 0; i < heights.size(); i++)
        {
            while (s.empty() && heights[i] < heights[s.top()])
            {
                next_smaller[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            next_smaller[s.top()] = n;
            s.pop();
        }

        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && heights[s.top()] > heights[i])
            {
                prev_smaller[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            prev_smaller[s.top()] = -1;
            s.pop();
        }

        for (int i = 0; i < n; ++i)
        {
        	cout << next_smaller[i] << " ";
        }
        cout <<  endl;
        for (int i = 0; i < n; ++i)
        {
        	cout << prev_smaller[i] << " ";
        }
        cout <<  endl;

        int ans = 0, i = 0;
        while (i < n)
        {
            int l = next_smaller[i] - prev_smaller[i] - 1;
            int h = heights[i];
            int area = l * h;
            int ans = max(ans, area);
        }
        return ans;
    }

};
int main()
{
    vector<int> v({2, 1, 5, 6, 2, 3});
    Solution s;
    int res = s.largestRectangleArea(v);
    cout << res << endl;
}