#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s, s1;
    s = "Hello World";
    cout << s << endl;

    s1 = "Learning String";
    cout << s1 << endl;

    if (s > s1)
    {
        cout << s << " is greater than " << s1 << endl;
    }
    else if (s < s1)
    {
        cout << s << " is smaller than " << s1 << endl;
    }
    else
    {
        cout << s << " is equals to " << s1 << endl;
    }

    s += s1;
    // cout << s << endl;
    // cout << s1 << endl;
    // cin >> s >> endl;
    // cout << s << endl;
    // cin.ignore();
    // cout << "Enter string : ";
    // getline(cin, s);
    // cout << s << endl;

    return 0;
}