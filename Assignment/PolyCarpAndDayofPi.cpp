#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pi = "3141592653589793238462643383279";
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int i = 0, cnt = 0;
        while (i != str.length())
        {
            if (str[i] == pi[i])
            {
                cnt++;
            }
            else{
                break;
            }
            i++;
        }
        cout << cnt << endl;
    }

    return 0;
}