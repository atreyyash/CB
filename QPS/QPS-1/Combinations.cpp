#include<iostream>
using namespace std;

int kd;
void solve(int n, int k, int *out, int j, int s){
    // Base Case 
    if(k == 0){
        for (int i = 0; i < kd; i++){
            cout << out[i] << " ";
        }
        cout << endl;
        return;
    }
    // Recursive Case
    for (int i = s; i <= n; i++){
        out[j] = i;
        solve(n, k - 1, out, j + 1, i + 1);
    }
}

int main() {
    int n = 4;
    int k = 2;
    int out[100];
    kd = k;
    solve(n, k, out, 0, 1);

    return 0;
}