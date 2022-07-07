#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n % i == 0){
            cout<<"Not Prime"<<endl;
            return 0;//return statement is used to end the program bcz there is no point in running loop if the no is not prime.
        }
        i++;
    }
    cout<<"Prime"<<endl;
    return 0;
}