#include <iostream>
using namespace std;
int length(char *a)
{
    int cnt = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}
void makeStr(char *a)
{
    int n = length(a) + 1;
    for (int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[n + 1] = '\0';
    a[0] = '0';
}
int main()
{
    char a[1000];
    int n;
    int i, j, k;
    cin.getline(a, 1000);
    makeStr(a);
    cin >> n;
    while (n--)
    {
        cin >> i >> j >> k;
        while (k--)
        {
            char tmp = a[j];
            for (int k = j; k > i; k--)
            {
                a[k] = a[k - 1];
            }
            a[i] = tmp;
        }
    }

    for (int l = 1; a[l] != '\0'; l++)
    {
        cout << a[l];
    }
    cout << endl;

    return 0;
}