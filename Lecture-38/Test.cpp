#include<iostream>
using namespace std;

int main() {
    cout << "INT_MAX : " << INT_MAX << endl;
    cout << "INT_MAX + 1 = INT_MIN : " << INT_MAX + 1 << endl;

    cout << "INT_MIN : " << INT_MIN << endl;
    cout << "INT_MIN - 1 = INT_MAX : " << INT_MIN + 1 << endl;

    /* If we add 1 to INT_MAX (infinity) then jumps to INT_MIN (-infinity) 
        Similarly if subtract 1 from INT_MIN (-infinity) then it jumps to INT_MAX (+infinity)
        Hence, we cannot do this in our we need to take care of corner substraction
    */

    return 0;
}