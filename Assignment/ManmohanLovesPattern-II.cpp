#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int spaces = -1;

    for (int i = 1; i <= n; i++)
    {
        int no = i - 1;
        if (no <= 0)
        {
            no = 1;
            cout << no;
        }
        else
        {
            cout << no;
            for (int j = 1; j <= i - 2; j++)
            {
                cout << "0";
            }
            cout << no;
        }
        cout << endl;
    }

    return 0;
}