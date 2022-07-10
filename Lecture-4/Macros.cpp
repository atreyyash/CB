#include<iostream>
using namespace std;
//Syntax : #define MACRO_NAME MACRO_VAL
//Macro name should be all capitals
#define NEWLINE endl
#define PRINT cout<<
#define PI 3.14 + 1

int main() {
    // cout<<"Hello World"<< NEWLINE;
    // PRINT "Hello World"<< NEWLINE;

    int r;
    cin>>r;
    PRINT 2 * PI * r<<endl;

    return 0;
}