#include<iostream>
using namespace std;

int main() {

    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(int);

    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }

    cout<<"After Bubble Sorting : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}