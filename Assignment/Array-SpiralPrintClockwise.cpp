#include <iostream>
using namespace std;

int main()
{
    int a[1000][1000];
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int sr = 0, er = row - 1, sc = 0, ec = col - 1;
    while (sr <= er && sc <= ec)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << ", ";
        }
        sr++;

        for (int i = sr; i <= er; i++)
        {
            cout << a[i][ec] << ", ";
        }
        ec--;

        if (sr <= er)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << a[er][i] << ", ";
            }
            er--;
        }

        if (sc <= ec)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << a[i][sc] << ", ";
            }
            sc++;
        }
    }
    cout << "END";

    return 0;
}