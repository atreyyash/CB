#include<iostream>
using namespace std;

int main() {
    int n= 10;
    //for(initialization;condition;updation){}
    
    //For Loop: 1st way
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    //For Loop 2nd Way
    int i=0;
    for(; i<=6;){
        cout<<i<<' ';
        i++;
    }
    cout<<endl;

    return 0;
}