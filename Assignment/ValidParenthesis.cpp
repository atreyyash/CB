#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool isBalenced(char *str)
{
    stack<char> s;
    int i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i++];
        switch (ch)
        {
        case '{':
        case '[':
        case '(':
            s.push(ch);
            break;
        case '}':
            if (s.empty() || s.top() != '{')
            {
                return false;
            }
            s.pop();
            break;
        case ']':
            if (s.empty() || s.top() != '[')
            {
                return false;
            }
            s.pop();
            break;
        case ')':
            if (s.empty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
            break;
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[100];
        cin >> a;
        bool res = isBalenced(a);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}