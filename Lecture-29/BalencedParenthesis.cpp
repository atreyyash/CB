#include<iostream>
#include<stack>
using namespace std;

bool isBalencedParenthesis(char *a){
    stack<char> s;

    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];
        switch (ch)
        {
        case '{':
        case '[':
        case '(':
            s.push(ch);
            break;
        case ')':
            // if(!s.empty() and s.top() == '('){
            //     s.pop();
            // }
            if(s.empty() || s.top() != '('){
                return false;
            }
            s.pop();
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
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    char a[] = "{a+[b*(c+d)]*e}";

    if(isBalencedParenthesis(a)){
        cout << "Balenced Hai" << endl;
    }
    else{
        cout << "Balenced nahi hai" << endl;
    }

    return 0;
}