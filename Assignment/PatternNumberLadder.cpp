#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1, i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << cnt << "\t";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}