#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int j = 0; j < t; j++)
    {
        string s, a;
        getline(cin, s);
        for (int i = 0;s[i] != '\0'; i++)
        {
            if(s[i] == 'p' && s[i+1] == 'i'){
                a = a + "3.14";
                i++;
            }
            else{
                a += s[i];
                
            }
            
        }
        cout << a << endl;
    }

    return 0;
}