#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void Subsequence(char *in, char *out, int i, int j, vector<string> &ans)
{
    // Base Case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        // cout << out << endl;
        // vector<string> v(x);
        string x(out);
        ans.push_back(x);
        return;
    }
    // Recursive Case
    Subsequence(in, out, i + 1, j, ans);
    out[j] = in[i];
    Subsequence(in, out, i + 1, j + 1, ans);
}

int main()
{
    char in[100000];
    char out[100000];
    int n;
    cin >> n;
    // cin.ignore();
    while (n--)
    {
        cin >> in;
        vector<string> ans;
        Subsequence(in, out, 0, 0, ans);

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}