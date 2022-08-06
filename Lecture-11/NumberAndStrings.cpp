#include<iostream>
using namespace std;

int main() {
    char a[100];
    int n;
    cin >> n;

    cin.get(); // We have to ignore first character after cin and cin.getline();
               //otherwise '\n' will be deafult delimiter for cin.getline() and it will not tak input
               //and if space is given between string and number one extra space is inserted in the string
               //for ex: "Hello World" will be " Hello World"

    cin.getline(a, 100);

    cout << "Number: " << n << endl;
    cout << "String: " << a << endl;

    return 0;
}