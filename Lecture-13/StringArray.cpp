#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string s[100];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}