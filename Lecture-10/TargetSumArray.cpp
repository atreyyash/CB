#include<iostream>
using namespace std;

void printPair(int a[], int n, int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] + a[j] == x){
                cout <<a[i] << " and " << a[j] << endl;
            }
        }
    }
}

int main() {
    int a[] = {1, 3, 2, 2, 0, 4};
    int n = sizeof(a) / sizeof(int);

    int x = 4;
    printPair(a, n, x);

    return 0;
}