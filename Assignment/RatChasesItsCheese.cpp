#include <iostream>
using namespace std;

bool RatAndCheese(char board[12][12], int sol[12][12], int m, int n, int i, int j)
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
    sol[i][j] = 1;
    // Right
    if (j + 1 < n && board[i][j + 1] != 'X' && sol[i][j + 1] != 1)
    {
        bool kyaRightSeRastaMila = RatAndCheese(board, sol, m, n, i, j + 1);
        if (kyaRightSeRastaMila)
        {
            return true;
        }
    }
    // Down
    if (i + 1 < m && board[i + 1][j] != 'X' && sol[i + 1][j] != 1)
    {
        bool kyaNicheSeRastaMila = RatAndCheese(board, sol, m, n, i + 1, j);
        if (kyaNicheSeRastaMila)
        {
            return true;
        }
    }
    // Left
    if (j - 1 >= 0 && board[i][j - 1] != 'X' && sol[i][j - 1] != 1)
    {
        bool kyaLeftSeRastaMila = RatAndCheese(board, sol, m, n, i, j - 1);
        if (kyaLeftSeRastaMila)
        {
            return true;
        }
    }
    // Up
    if (i - 1 >= 0 && board[i - 1][j] != 'X' && sol[i - 1][j] != 1)
    {
        bool kyaUparSeRastaMila = RatAndCheese(board, sol, m, n, i - 1, j);
        if (kyaUparSeRastaMila)
        {
            return true;
        }
    }
    sol[i][j] = 0;
    return false;
}

int main()
{
    char board[12][12];
    int m, n;
    int sol[12][12] = {0};
    cin >> m >> n;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    bool ans = RatAndCheese(board, sol, m, n, 0, 0);
    if (ans == false)
    {
        cout << "NO PATH FOUND" << endl;
    }

    return 0;
}