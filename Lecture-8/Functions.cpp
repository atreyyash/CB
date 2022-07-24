#include<iostream>
using namespace std;

//Syntax:
// data_type function_name(arguements){
//     //Work
// }

void HelloWorld(){
    cout<<"Hello World\n";
}

void PrintAddition(int a, int b){
    cout<<"Printing via Function : "<<a + b<<endl;
}

int add(int a, int b){
    int ans = a + b;

    return ans; //Return the ans
}

void PrintOddEven(int result){
    if(result % 2 == 0){
        cout<<"Even\n";
    }
    else{
        cout<<"Odd\n";
    }
}

int main() {

    HelloWorld();   //Invoking or Calling

    int a = 10, b = 20;

    // PrintAddition(a, b);

    int result = add(a, b);
    cout<<result<<endl;     //the result value is coming from function

    PrintOddEven(result);

    return 0;
}