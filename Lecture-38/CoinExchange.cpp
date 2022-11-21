#include<iostream>
#include<algorithm>
using namespace std;

int CoinExchange(int amt, int *deno, int n){
    // Base Case
    if(amt == 0){
        return 0;
    }
    // Recursive Case
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amt >= deno[i]){
            int chotiAmt = amt - deno[i];
            int chotiAmtCoins = CoinExchange(chotiAmt, deno, n);
            if(chotiAmtCoins != INT_MAX){
                ans = min(chotiAmtCoins + 1, ans);
            }
        }
    }
    return ans;
}

int main() {
    int deno[] = {1, 7, 10};
    int n = sizeof(deno) / sizeof(int);

    cout << CoinExchange(15, deno, n);

    return 0;
}