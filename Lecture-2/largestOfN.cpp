#include<iostream>
#include<climits> //INT_MAX: 2^31 - 1, INT_MIN: 2^31
using namespace std;

int main(){

    int n, a, max = INT_MIN;
    cin>>n;

    int i=1;
    while(i<=n){
        cin>>a;
        if(a > max){
            max = a;
        }
        i++;
    }
    cout<<"Max : "<<max<<endl;

    return 0;
}