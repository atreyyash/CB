#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int a = 10;
    float f = 1.11;
    char ch = 'A';

    cout<< "Address of a : "<< &a << endl;
    cout<< "Address of f : "<< &f << endl;
    cout<< "Address of ch : "<< &ch << endl;    //if we print the address of character it will print everything untill null is encountered.
    cout<< "Address of arr : "<< arr << endl;   //the name of array is the address of first bucket so no need to add '&' operator
    

    return 0;
}