#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime = true;

    
    for(int j=2;j<n;j++){
        if(n % j == 0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<n<<" ";
    }


    // if(isPrime){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }
    

    return 0;
}