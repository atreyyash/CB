#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime = true;

    for(int i=2;i<=n;i++){
        isPrime=true;
        for(int j=2;j<i;j++){
            if(i % j == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }

    return 0;
}

//Inner loop determines that given number is prime or not 
//Outer loop gives the inner loop every number to detect whether its prime or not.