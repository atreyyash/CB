#include<iostream>
using namespace std;

int NStairs(int n, int k){
    // Base Case
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    // Recursive Case
    int ans = 0;
    for (int i = 1; i <= k ; i ++){
        ans += NStairs(n - i, k);
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << NStairs(n, k);

    return 0;
}