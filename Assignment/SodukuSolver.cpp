#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int board[][10], int n, int i, int j, int no)
{
    // check row and col
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == no || board[i][k] == no)
        {
            return false;
        }
    }

    // check in the box
    n = sqrt(n);
    int si = (i / n) * n;
    int sj = (j / n) * n;
    for (int k = si; k < si + n; k++)
    {
        for (int l = sj; l < sj + n; l++)
        {
            if (board[k][l] == no)
            {
                return false;
            }
        }
    }
    return true;
}

bool SudokuSolver(int board[][10], int n, int i, int j)
{
    // Base Case
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }
    if (j == n)
    {
        return SudokuSolver(board, n, i + 1, 0);
    }
    if (board[i][j] != 0)
    {
        return SudokuSolver(board, n, i, j + 1);
    }
    // Recursive Case
    for (int no = 1; no <= n; no++)
    {
        if (isSafe(board, n, i, j, no))
        {
            board[i][j] = no;
            bool bakiHua = SudokuSolver(board, n, i, j + 1);
            if (bakiHua)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int board[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    SudokuSolver(board, n, 0, 0);

    return 0;
}