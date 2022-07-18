#include<iostream>
using namespace std;

int a = 1000;   //Global Scope (Out of main)

int main() {
    cout<<a<<endl;
    int a = 1;

    if(a > 0){
        int a = 10;
        cout<<a++<<endl;
        cout<<"Global a : "<<::a<<endl; 
    }
    cout<<a<<endl;

    return 0;
}

//Same Scope cannot have variable with same name 
//But diffrent scopes can have same names

//Scopre Resolution Operator == ::