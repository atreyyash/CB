#include<iostream>
using namespace std;

void mergeTwoSorted(int a[], int b[], int m, int n){
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(a[i] > b[j]){
            a[k--] = a[i--];
        }
        else{
            a[k--] = b[j--];
        }
    }

    while(j >= 0){
        a[k--] = b[j--];
    }
}

void printArray(int a[], int n){

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a[8] = {2, 3, 4, 6};
    int b[4] = {1, 5, 7, 8};
    int n = 4, m = 4;
    cout<<"Before : "<<endl;
    cout<<"A : ";
    printArray(a, m);
    cout<<"B : ";
    printArray(b, n);
    mergeTwoSorted(a, b, m, n);
    cout<<"After : ";
    printArray(a, m+n);

    return 0;
}