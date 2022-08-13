#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool meraCompare(string a, string b){
    // cout << "Comparing : " << a << ", " << b << endl;
    // return a.length() < b.length();   // For Increasing
    // return a > b;   // For Decreasing

    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

int main() {
    string s[100] = {
        "pineapple",
        "apple",
        "kiwi",
        "fivi",
        "jivi",
        "tivi",
        "papaya",
        "orange",
        "mango"
    };
    int n = 9;

    cout << "Before Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    sort(s, s + n, meraCompare);

    cout << "After Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    
    

    /*
    int a[] = {5, 3, 7, 8, 50, 1, 2, 0};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    
    sort(a, a+n, meraCompare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    */

    return 0;
}