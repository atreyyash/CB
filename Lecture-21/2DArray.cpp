#include <iostream>
using namespace std;

int main()
{
    int **arr = new int *[100];
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    int no = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(*(arr + i) + j) = no++;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *(*(arr + i) + j) << "\t";
        }
        cout << endl;
    }

    return 0;
}