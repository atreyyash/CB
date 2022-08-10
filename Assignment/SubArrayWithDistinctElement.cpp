#include <iostream>
using namespace std;

int main()
{
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0;
    int x, ans = 0;
    int freq[1000005] = {0};
    while (i < n && j < n)
    {
        int no = a[j];
        if (freq[no] > 0)
        {
            while (freq[no] > 0)
            {
                freq[a[i]]--;
                i++;
            }
        }
        else
        {
            freq[no]++;
            x = j - i + 1;
            ans += (x % mod * (x + 1) % mod) / 2;
            ans %= mod;
            j++;
        }
    }

    cout << ans << endl;

    return 0;
}