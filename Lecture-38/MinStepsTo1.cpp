#include<iostream>
#include<algorithm>
using namespace std;

int MinStepsTo1(int n) {
    // Base Case
    if (n == 1) {
        return 0;
    }
    // Recursive Case
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;
    op1 = MinStepsTo1(n - 1);
    if (n % 2 == 0) {
        op2 = MinStepsTo1(n / 2);
    }
    if (n % 3 == 0) {
        op3 = MinStepsTo1(n / 3);
    }
    return min(op1, min(op2, op3)) + 1;
}

int topDown(int n, int *dp)
{
    // Base Case
    if (n == 1) {
        return dp[n] = 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    // Recursive Case

    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;
    op1 = topDown(n - 1, dp);
    if (n % 2 == 0)
    {
        op2 = topDown(n / 2, dp);
    }
    if (n % 3 == 0)
    {
        op3 = topDown(n / 3, dp);
    }

    int ans = min(op1, min(op2, op3)) + 1;
    dp[n] = ans;
    return ans;
}

int bottomUp(int n) {
    int *dp = new int[n + 1];
    dp[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        int op1, op2, op3;
        op1 = op2 = op3 = INT_MAX;
        op1 = dp[i - 1];
        if (i % 2 == 0) {
            op2 = dp[i / 2];
        }
        if (i % 3 == 0) {
            op3 = dp[i / 3];
        }
        dp[i] = min(op1, min(op2, op3)) + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}

int main() {

    int dp[1000];
    for (int i = 0; i < 1000; i++)
    {
        dp[i] = -1;
    }
    int n;
    cin >> n;
    cout << topDown(n, dp) << endl;
    cout << MinStepsTo1(n) << endl;
    cout << bottomUp(n);

    return 0;
}