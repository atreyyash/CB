#include <iostream>
#include <algorithm>
using namespace std;

int topDown(int *price, int *wt, int capacity, int n)
{
    // Base Case
    if (capacity == 0 || n == 0)
    {
        return 0;
    }
    // Recursive Case
    int op1, op2;
    op1 = op2 = INT_MIN;

    if (capacity >= wt[n - 1])
    {
        op1 = price[n - 1] + topDown(price, wt, capacity - wt[n - 1], n - 1);
    }
    op2 = topDown(price, wt, capacity, n - 1);

    return max(op1, op2);
}

int bottomUp(int *price, int *wt, int N, int capacity)
{
    int dp[100][100] = {0};
    for (int n = 1; n <= N; n++)
    {
        for (int cap = 1; cap <= capacity; cap++)
        {
            int op1, op2;
            op1 = op2 = INT_MIN;
            if (cap >= wt[n - 1])
            {
                op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
            }
            op2 = 0 + dp[n - 1][cap];
            dp[n][cap] = max(op1, op2);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < capacity; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[N][capacity];
}

int main()
{
    int price[] = {5, 6, 8, 3}; // 7, 4, 4
    int wt[] = {6, 3, 4, 2};    // 3, 2, 2

    int capacity = 8;

    cout << topDown(price, wt, capacity, 4) << endl;

    cout << bottomUp(price, wt, 4, capacity) << endl;

    return 0;
}