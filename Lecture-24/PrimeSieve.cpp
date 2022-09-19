#include <iostream>
using namespace std;

// Time Complexity --> BigO(N * log(log(N)));
// Space Complexity --> BigO(N)
void PrimeSieve(int n)
{
    bool *a = new bool[n + 1];
    for (int i = 0; i <= n; i++)
    {
        a[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (a[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (a[i] == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    PrimeSieve(n);

    return 0;
}