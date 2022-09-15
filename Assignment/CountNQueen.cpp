#include <iostream>
using namespace std;

int cnt = 0;
bool isSafe(int sol[][100], int n, int i, int j)
{
    // check for row & col
    for (int k = 0; k < n; k++)
    {
        if (sol[i][k] == 1 || sol[k][j] == 1)
        {
            return false;
        }
    }

    // Check right diagonal
    int k = i, l = j;
    while (k >= 0 && j < n)
    {
        if (sol[k][l] == 1)
        {
            return false;
        }
        k--;
        l++;
    }

    // check left diagonal
    k = i, l = j;
    while (k >= 0 && l >= 0)
    {
        if (sol[k][l] == 1)
        {
            return false;
        }
        k--;
        l--;
    }
    return true;
}

bool NQueen(int sol[][100], int n, int i)
{
    // Base Case
    if (i == n)
    {
        // for(int i = 0 ; i < n ; i++){
        // 	for(int j = 0 ; j < n ; j++){
        // 		cout << sol[i][j] << " ";
        // 	}
        // 	cout << endl;
        // }
        cnt++;
        return false;
    }

    // Recursive Case
    for (int j = 0; j < n; j++)
    {
        if (isSafe(sol, n, i, j))
        {
            sol[i][j] = 1;
            bool kyaBakiPlaceHui = NQueen(sol, n, i + 1);
            if (kyaBakiPlaceHui)
            {
                return true;
            }
            sol[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int sol[100][100] = {0};
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        NQueen(sol, n, 0);
        cout << cnt << endl;
    }

    return 0;
}