#include<iostream>
using namespace std;

int main() {
    // int *a, *x, *y, *z, l;  //a, x, y, z, and l is integer
    int a = 10;
    float f = 1.11;
    char ch = 'A';

    int *ap = &a;
    float *fp = &f;
    char *chp = &ch;

    cout<< "Address of &a : "<< &a << endl;
    cout<< "Address of ap : "<< ap << endl;
    cout<< "Address of &f : "<< &f << endl;
    cout<< "Address of fp : "<< fp << endl;
    cout<< "Address of &ch : "<< (int*)&ch << endl; //if we want to print the address of character bucket we can fool the compiler
    cout<< "Address of chp : "<< (int*)chp << endl; //by explicitly telling it that it is of (int*) type.

    //Pointers and Garbage value
    int *pt = NULL; //khaali pointer me hamesha null daal do taaki jab usse defer kare toh segmentation fault aa jaye
    // cout<<*pt<<endl;
    if(*pt > 1){
        cout<<"Take left turn\n";
    }
    else{
        cout<<"Take right turn\n";
    }
    // cout<<*ap + 10<<endl;

    return 0;
}