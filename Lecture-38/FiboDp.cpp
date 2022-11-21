#include <iostream>
using namespace std;

int fibo(int n, int *dp)
{
    // Base Case
    if (n <= 1)
    {
        dp[n] = n;
        return n;
    }
    // Recursive Case
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int ans = fibo(n - 1, dp) + fibo(n - 2, dp);
    dp[n] = ans;
    return ans;
}

int bottomUp(int n){
    int *dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for (int i = 0; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}

int main()
{
    int dp[10000] = {-1};
    for (int i = 0; i < 10000; i++)
    {
        dp[i] = -1;
    }
    int n;
    cin >> n;
    int ans = fibo(n, dp);
    cout << ans << endl;

    int res = bottomUp(n);
    cout << res << endl;

    return 0;
}