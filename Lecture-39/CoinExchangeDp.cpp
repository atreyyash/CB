#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
// Top Down Approach
int CoinExchange(int amt, int *deno, int n, int *dp)
{
    // Base Case
    if (amt == 0)
    {
        return dp[amt] = 0;
    }
    // Recursive Case
    if (dp[amt] != -1)
    {
        return dp[amt];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amt >= deno[i])
        {
            int chotiAmt = amt - deno[i];
            int chotiAmtCoins = CoinExchange(chotiAmt, deno, n, dp);
            if (chotiAmtCoins != INT_MAX)
            {
                ans = min(chotiAmtCoins + 1, ans);
            }
        }
    }
    return dp[amt] = ans;
}

int bottomUp(int *deno, int n, int amt)
{
    vector<int> dp(amt + 1, INT_MAX);
    dp[0] = 0;
    for (int rupay = 1; rupay <= amt; rupay++)
    {
        for (int j = 0; j < n; j++)
        {
            if(rupay >= deno[j]){
                int kamRupay = rupay - deno[j];
                dp[rupay] = min(dp[rupay], dp[kamRupay] + 1);
            }
        }
    }
    
    for (int rupay = 0; rupay <= amt; rupay++)
    {
        cout << dp[rupay] << " ";
    }
    cout << endl;
    return dp[amt];
}

int main()
{
    int deno[] = {1, 5, 7};
    int n = sizeof(deno) / sizeof(int);
    int dp[10000];
    memset(dp, -1, sizeof dp);
    // cout << CoinExchange(15, deno, n, dp);

    cout << bottomUp(deno, 3, 15) << endl;

    return 0;
}