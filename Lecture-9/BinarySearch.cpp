#include<iostream>
using namespace std;

int BinarySearch(int a[], int n, int key){
    int s = 0;
    int e = n - 1;

    while(s <= e){  //untill start is less than end
       int mid = (s + e) / 2;
       if(a[mid] == key){   //if key found at mid index, mid returned
        return mid;
       }
       else if (a[mid] < key){  //if key is greater than mid then move start at mid + 1
        s = mid + 1;
       }
       else{    //if key is less than mid than end is moved to mid - 1
        e = mid - 1;
       }
    }
    return -1;
}

int main() {
    int a[] ={1, 2, 4, 6, 7};
    int n = sizeof(a) / sizeof(int);
    int key = 6;
    int ans = BinarySearch(a, n, key);

    if(ans == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Key Found : "<< ans << endl;
    }

    return 0;
}