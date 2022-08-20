#include<iostream>
#include<cstring>
using namespace std;

string s[10] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

void NoToWords(int n){
    // Base Case
    if(n == 0){
        return;
    }
    // Recurisve Case
    int digit = n % 10;
    // cout << s[digit] << " ";
    NoToWords(n / 10);
    cout << s[digit] << " ";
}

int main() {
    int n;
    cin >> n;
    NoToWords(n);

    return 0;
}