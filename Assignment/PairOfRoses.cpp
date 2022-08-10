#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a[1000];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int tar, ai, aj;
        cin >> tar;
        sort(a, a + n);
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] == tar)
            {
                ai = i;
                aj = j;
                i++;
                j--;
            }
            else if (a[i] + a[j] > tar)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << "Deepak should buy roses whose prices are " << a[ai] << " and " << a[aj] << "." << endl;
    }
}