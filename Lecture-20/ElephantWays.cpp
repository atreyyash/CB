#include <iostream>
using namespace std;

int ElephantWays(int i, int j)
{
    // Base Case
    if (i == 0 && j == 0)
    {
        return 1;
    }
    // Recursive Case
    int ans = 0;
    for (int k = 0; k < i; k++)
    {
        ans += ElephantWays(k, j);
    }
    for (int k = 0; k < j; k++)
    {
        ans += ElephantWays(i, k);
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    // n and m are the last indices of the array
    cout << ElephantWays(n, m);

    return 0;
}