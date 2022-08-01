#include <iostream>
using namespace std;

// Inverse of Array without Recursion
int main()
{
    int a[1000], b[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int idx = a[i];
        b[idx] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}