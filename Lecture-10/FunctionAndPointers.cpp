#include<iostream>
using namespace std;

void update(int *ax){
    *ax = *ax + 5;
}

int main() {
    //Here it is pass by value, and here the value is the address of the bucket hence it is working as pass by reference
    int a = 10;
    int *aptr = &a;

    cout<<*aptr <<endl;

    update(aptr);

    cout<<*aptr<<endl;

    return 0;
}