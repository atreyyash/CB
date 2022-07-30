#include<iostream>
using namespace std;

int fact(int n){
    int mul = 1;
    for(int i=1;i<=n;i++){
        mul *= i;
    }
    return mul;
}

int nCr(int n, int r){
    int ans = fact(n) / (fact(r) * fact(n-r));
    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;
    cout<<n<<"C"<<r<<" : "<<nCr(n, r);

    return 0;
}