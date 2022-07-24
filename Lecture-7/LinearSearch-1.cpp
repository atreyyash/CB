#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(n);
    int key = 5, i;
    for(i=0;i<n;i++){
        if(a[i] == key){
            cout<<"Element Found at "<<i+1;
            break;
        }
    }
    if(i == n){
        cout<<"Element Not Found!";
    }

    return 0;
}