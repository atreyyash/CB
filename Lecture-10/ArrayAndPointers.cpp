#include<iostream>
using namespace std;

// void printArray(int a[], int n){
void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i) <<" ";     //Both the statements are same
        // cout<<a[i] <<" ";
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);

    return 0;
}