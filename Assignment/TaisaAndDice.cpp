#include <iostream>
using namespace std;

void taisa(int n, int s, int r)
{
    int val = s - r;
    cout << val << " ";

    for (int j = 2; j <= n; j++)
    {
        while (r - val < n - j)
        {
            val--;
        }
        cout << val << " ";
        r = r - val;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        taisa(n, s, r);
    }

    return 0;
}