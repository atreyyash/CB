#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int topDown(string s1, string s2, int n, int m, int dp[][100])
{
    // Base Case
    if (n == 0 || m == 0)
    {
        return dp[n][m] = 0;
    }
    // Calculate karne se pahle check
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    // Recursive Case
    // When nth and mth char is same then we move both pointer
    if (s1[n - 1] == s2[m - 1])
    {
        return dp[n][m] = 1 + topDown(s1, s2, n - 1, m - 1, dp);
    }
    else
    {
        // When nth and mth char are not same then we take max from ways i.e m - 1 and n - 1
        return dp[n][m] = max(
                   topDown(s1, s2, n, m - 1, dp),
                   topDown(s1, s2, n - 1, m, dp));
    }
}

int bottomUp(string &s1, string &s2)
{
    int dp[100][100] = {0};
    int n = s1.length(), m = s2.length();
    // LCS of string with a string of zero characters will be zero
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    int k = dp[n][m];
    char a[100];
    a[k] = '\0';
    k--;
    int i = n, j = m;
    while (k >= 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            a[k] = s1[i - 1];
            k--;
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] >= dp[i][j - 1])
                i--;
            else
                j--;
        }
    }

    cout << a << endl;

    return dp[n][m];
}

int main()
{
    int dp[100][100];
    memset(dp, -1, sizeof dp);

    string s1 = "abccd";
    int n = s1.length();

    string s2 = "abcd";
    int m = s2.length();

    cout << topDown(s1, s2, n, m, dp) << endl;

    cout << bottomUp(s1, s2) << endl;

    return 0;
}