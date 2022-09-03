#include <iostream>
using namespace std;

int NStairs(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    // Recursive Case
    return NStairs(n - 1) + NStairs(n - 2) + NStairs(n - 3);
}

int main()
{
    int n;
    cin >> n;
    cout << NStairs(n);

    return 0;
}