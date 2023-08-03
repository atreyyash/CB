#include <iostream>
#include <string>
using namespace std;

string brokenKey(string str)
{
    int freq[26] = {0};
    string res = "";
    int i = 0, j = 0;
    while (j < str.length())
    {
        if (str[j] == str[i])
        {
            j++;
        }
        else
        {
            if ((j - i) % 2 != 0)
            {
                // res.push_back(str[i]);
                if (freq[str[i] - 97] == 0)
                    freq[str[i] - 97] = 1;
            }
            i = j;
            j++;
        }
    }
    if ((j - i) % 2 != 0)
    {
        if (freq[str[i] - 97] == 0)
            freq[str[i] - 97] = 1;
        i = j;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            res.push_back((char)i + 97);
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        string str;
        cin >> str;
        string res = brokenKey(str);
        cout << res << endl;
    }

    return 0;
}

// for (int i = 0; i < str.length(); i++)
// {
//     char c = str[i] - 97;
//     freq[c]++;
// }

// // for (int i = 0; i < 26; i++){
// //     cout << freq[i] << " ";
// // }

// for (int i = 0; i < 26; i++)
// {
//     if (freq[i] > 0 && freq[i] % 2 != 0)
//     {
//         char c = i + 97;
//         res.push_back(c);
//     }
// }