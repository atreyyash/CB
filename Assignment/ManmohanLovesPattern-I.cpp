#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            // even row
            cout << '1';
            for (int j = 2; j < i; j++)
            {
                cout << '0';
            }
            cout << '1';
        }
        else
        {
            // odd row
            for (int j = 1; j <= i; j++)
            {
                cout << '1';
            }
        }
        cout << endl;
    }
    return 0;
}