#include<iostream>
using namespace std;

int main() {
    int a[] = {7, 6, 8, 4, 3, 2, 0, 1};
    int n = sizeof(a) / sizeof(int);

    cout<<"Insertion Sort"<<endl;
    
    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int hpc, j;
    for(int i=1;i<n;i++){
        hpc = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j] > hpc){
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = hpc;
    }

    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}