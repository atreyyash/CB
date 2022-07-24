#include<iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        int min = i;        //Min ko i se initialize karte hai aur a[j] ko compare karte hai a[min] se agar chota mila toh min ko j se update karte hai aur loop se bahar aake swap
        for(int j=i+1;j<n;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        //Swap
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout<<"After Selection Sort : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}