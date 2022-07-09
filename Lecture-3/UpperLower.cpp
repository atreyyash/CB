#include<iostream>
using namespace std;

int main() {
    //Implicit Type Conversion
    // char ch;
    // cin>>ch;
    // int x = ch;
    // if(x>=65 && x<=90){
    //     cout<<"UpperCase"<<endl;
    // }
    // else{
    //     cout<<"LowerCase"<<endl;
    // }

    //Operator Type Conversion
    char ch;
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"UpperCase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"LowerCase"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }


    return 0;
}
