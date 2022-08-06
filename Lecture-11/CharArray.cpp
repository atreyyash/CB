#include<iostream>
using namespace std;

int main() {
    char a[] = "Hello World";
    char b[12] = "Hello World";
    cout << a << endl;
    cout << b << endl;

    for (int i = 0; b[i] != '\0'; i++){
        cout << b[i] << " ";
    }

    return 0;
}