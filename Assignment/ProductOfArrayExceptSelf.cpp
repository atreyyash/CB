#include<iostream>
using namespace std;

int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        long long int mul = 1;
        for(int j=0;j<n;j++){
            if(i != j){
                mul *= a[j];
            }
        }
        cout<<mul<<" ";
    }

    return 0;
}