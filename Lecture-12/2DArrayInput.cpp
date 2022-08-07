#include<iostream>
using namespace std;

int main() {
    int a[100][100];
    int n, m, num = 1;
    cout << "Enter Rows and Cols : ";
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            // cin >> a[i][j];
            a[i][j] = num++;
        }
    }

    cout << "Array A : " << endl;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}