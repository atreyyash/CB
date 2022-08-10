#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100000], b[100000];
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int i = 0;
        int j = 0;
        int sum_a = 0, sum_b = 0;
        int ans = 0;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                ans += (sum_a > sum_b) ? sum_a : sum_b;
                sum_a = sum_b = 0;
                ans += a[i];
                i++;
                j++;
            }
            else
            {
                if (a[i] > b[j])
                {
                    sum_b += b[j++];
                }
                else
                {
                    sum_a += a[i++];
                }
            }
        }

        while (i < n)
            sum_a += a[i++];
        while (j < m)
            sum_b += b[j++];

        if (sum_a > sum_b)
        {
            ans += sum_a;
        }
        else
        {
            ans += sum_b;
        }

        cout << ans << endl;
    }
    return 0;
}