#include<iostream>
using namespace std;

//Arrays are always passed by reference 
//And cannot be passed by value.
void SelectionSort(int a[], int n){
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
}

void printArray(int a[], int n){

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a[] = {5, 6, 7, 4, 3, 7, 8, 9, 0, 1};
    int n = sizeof(a) / sizeof(int);

    cout<<"Before Sorting : ";
    printArray(a, n);
    SelectionSort(a, n);
    cout<<"After Selection Sort : ";
    printArray(a, n);

    return 0;
}