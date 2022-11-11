#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

int histogram(vector<int> &a)
{
    stack<int> s;
    vector<int> ns(a.size());
    vector<int> ps(a.size());
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            ns[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        ns[s.top()] = n;
        s.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            ps[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        ps[s.top()] = -1;
        s.pop();
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = ns[i] - ps[i] - 1;
        int h = a[i];
        int area = l * h;
        ans = max(ans, area);
    }
    return ans;
}

int32_t main()
{
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int res = histogram(v);
    cout << res << endl;

    return 0;
}