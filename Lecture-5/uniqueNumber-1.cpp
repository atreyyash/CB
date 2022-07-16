#include<iostream>
using namespace std;

int main() {
    int n;
    int ans = 0;
    int a;
    cin>>n;

    while(n>0){
        cin>>a;
        ans = ans ^ a;
        n--;
    }
    cout<<"Unique Number : "<<ans;


    return 0;
}