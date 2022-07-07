#include<iostream>
using namespace std;

int main(){
    int n, cnt=1;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<cnt<<"\t";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}




/*
1
2   3
4   5   6
7   8   9   10
*/