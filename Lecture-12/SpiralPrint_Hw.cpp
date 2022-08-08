#include<iostream>
using namespace std;

void SpiralPrint(int a[][100], int n, int m){
    int sr = 0, er = n - 1, sc = 0, ec = m - 1;
    while(sr<=er && sc<=ec){
        // 1. Print sr from sc to ec
        for (int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << " ";
        }
        sr++;

        // 2. Print ec from sr to ec
        for (int i = sr; i <= er; i++)
        {
            cout << a[i][ec] << " ";
        }
        ec--;

        // 3. Print er from ec to sc
        if(sr <= er){
            for (int i = ec; i >= sc; i--)
            {
                cout << a[er][i] << " ";
            }
            er--;
        }

        // 4. Print sc from er to sr
        if(sc <= ec){
            for (int i = er; i >= sr; i--)
            {
                cout << a[i][sc] << " ";
            }
            sc++;
        }
    }
}

int main() {
    int a[100][100];
    int n, m;
    cin >> n >> m;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = num;
            cout << a[i][j] << " ";
            num++;
        }
        cout << endl;
    }
    cout << "Spiral Print : ";
    SpiralPrint(a, n, m);

    return 0;
}