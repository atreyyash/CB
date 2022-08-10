#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pt, ct;

    for (int i = 0; i < n; i++)
    {
        pt = 1;
        cout << "1"
             << " ";
        for (int r = 1; r <= i; r++)
        {
            ct = pt * (i - r + 1) / r;
            cout << ct << " ";
            pt = ct;
        }
        cout << endl;
    }
}