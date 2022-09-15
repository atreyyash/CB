#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> ans;
void Permutation(char *a, int i)
{
    // Base Case
    if (a[i] == '\0')
    {
        // cout << a << endl;
        string x(a);
        ans.push_back(x);
        return;
    }
    // Recursive Case
    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        Permutation(a, i + 1);
        swap(a[i], a[j]);
    }
}

int main()
{
    char a[100000];
    cin >> a;
    Permutation(a, 0);
    sort(ans.begin(), ans.end());
    // cout << endl << ans[0];
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] < a)
        {
            cout << ans[i] << endl;
        }
    }

    return 0;
}