#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 0;

    int i = 1;
    while (i <= n)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << "\t";
            a = b;
            b = c;
            c = a + b;
        }
        cout << endl;
        i++;
    }
    return 0;
}