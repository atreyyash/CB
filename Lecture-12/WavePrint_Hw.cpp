#include<iostream>
using namespace std;

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
    cout << "Wave Print : ";
    for (int j = 0; j < m; j++)
    {
        if(j % 2 == 0){
            for (int i = 0; i < n; i++)
            {
                cout << a[i][j] << " ";
            }
            
        }
        else{
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
            
        }
    }
    

    return 0;
}