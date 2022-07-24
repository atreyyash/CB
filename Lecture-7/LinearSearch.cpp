#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(n);
    int key = 4, i;
    bool keyFound = false;
    for(i=0;i<n;i++){
        if(a[i] == key){
            cout<<"Element Found at Position "<<i+1;
            keyFound = true;
            break;
        }
    }
    if(keyFound == false){
        cout<<"Element Not Found!";
    }

    return 0;
}