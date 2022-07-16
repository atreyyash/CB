#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    //PRINT THE REVERSE
    // while(n!=0){
    //     cout<<n%10;
    //     n = n / 10;
    // }

    // for(;n!=0;n=n/10){
    //     cout<<n%10;
    // }

    //ACTUAL REVERSE
    int rev = 0;
    while(n!=0){
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    cout<<"Reverse Number : "<<rev;


    return 0;
}