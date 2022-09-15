#include <iostream>
using namespace std;

bool RatAndMaze(char board[][1001], int sol[][1001], int m, int n, int i, int j)
{
    // Base Case
    if (i == m - 1 && j == n - 1)
    {
        sol[i][j] = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }
    // Recursive Case
    if (j + 1 < n && board[i][j + 1] != 'X')
    {
        sol[i][j] = 1;
        bool KyaRightSeRastaMila = RatAndMaze(board, sol, m, n, i, j + 1);
        if (KyaRightSeRastaMila)
        {
            return true;
        }
        sol[i][j] = 0;
    }

    if (i + 1 < m && board[i + 1][j] != 'X')
    {
        sol[i][j] = 1;
        bool KyaNicheSeRastaMila = RatAndMaze(board, sol, m, n, i + 1, j);
        if (KyaNicheSeRastaMila)
        {
            return true;
        }
        sol[i][j] = 0;
    }
    return false;
}

int main()
{
    char board[1001][1001];
    int m, n;
    cin >> m >> n;
    int sol[1001][1001] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    // for (int i = 0; i < m; ++i){
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout << board[i][j] << " ";
    //     }
    // 	cout << endl;
    // }
    RatAndMaze(board, sol, m, n, 0, 0);

    return 0;
}
