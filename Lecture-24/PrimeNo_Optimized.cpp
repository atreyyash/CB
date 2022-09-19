#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    // BigO(sqrt(n))
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

bool isPrime1(int n)
{
    // BigO(sqrt(n / 2));
    if (n % 2 == 0 && n != 2)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    // bool ans = isPrime(n);
    // if (ans)
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }

    // BigO(N*sqrt(N)); --> O(N^3/2)
    for (int i = 2; i <= n; i++)
    {
        if (isPrime1(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}