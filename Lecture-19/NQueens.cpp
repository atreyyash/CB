#include <iostream>
using namespace std;

bool isSafe(int board[][100], int i, int j, int n)
{
    int l = i, m = j;
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == 1 || board[i][k] == 1)
        {
            return false;
        }
    }

    // check up right diagonal
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    // check up left diagonal
    while (l >= 0 && m >= 0)
    {
        if (board[l--][m--])
        {
            return false;
        }
    }
    return true;
}

bool NQueen(int board[][100], int i, int n)
{
    // Base Case
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << board[i][j] << " ";
                board[i][j] == 1 ? cout << "Q " : cout << "_ ";
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }
    // Recursive Case
    // Har column par jao ith row ke
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, i, j, n))
        {
            // check karlo jis cell par ho waha queen rakhna safe hai
            board[i][j] = 1; // Agar safe hai toh rakh do

            bool kyaBakiPLaceHui = NQueen(board, i + 1, n);

            if (kyaBakiPLaceHui)
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
    int board[100][100] = {0};

    NQueen(board, 0, 4);

    return 0;
}