#include<iostream>
using namespace std;

int main() {

    //Syntax
    //conditon ? work1 : work2;     //conditon? true(work1) : false(work2)
    int a = 10;
    bool b;

    a > 0 ? cout<<"Hello\n" : cout<<"world\n";      //More than one condition can also be checked

    b = ( (a > 0) ? true : false );
    b == true ? cout<<"A is greater than zero\n" : cout<<"A is smaller than 0\n";
    
    // if(a > 0){
    //     cout<<"Hello";
    // }
    // else{
    //     cout<<"World":
    // }

    return 0;
}