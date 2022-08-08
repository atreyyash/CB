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
    int key;
    cin >> key;
    bool isFound = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == key){
                cout << "Key Found at " << i << ", " << j << endl;
                isFound = true;
                break;
            }
        }
        if(isFound){
            break;
        }
    }
    

    return 0;
}