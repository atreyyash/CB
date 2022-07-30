#include<iostream>
using namespace std;

// void printArray(int a[6], int n){    //Specifying the size of linear array is optional
void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // int a[6] = {1, 2, 3, 4, 5, 6};
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);

    return 0;
}