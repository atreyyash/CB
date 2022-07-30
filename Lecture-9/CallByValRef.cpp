#include<iostream>
using namespace std;

// void Update(int x){  //Pass By Value
void Update(int &x){    //Pass By Reference
    x = x + 1;
}

int main() {
    int a = 1;
    cout<<"Before Update : "<<a<<endl;
    Update(a);
    cout<<"Before Update : "<<a<<endl;

    //Reference variable
    //int &b = a;   //this creates a reference variable/nickname for variable a.

    return 0;
}