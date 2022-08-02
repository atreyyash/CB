#include <iostream>
using namespace std;

// N = 5
// 1 2 3 4 5
// 1 2 3 4 *
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        // Numbers
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        // Stars
        if (k >= 1)
        {
            int stars = 2 * k - 1;
            while (stars > 0)
            {
                cout << "*"
                     << " ";
                stars--;
            }
        }
        k++;
        cout << endl;
    }
    return 0;
}