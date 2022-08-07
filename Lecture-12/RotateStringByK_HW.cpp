#include <iostream>
using namespace std;

int length(char *a)
{
    int cnt = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}

void RotateByK(char *a, int k)
{
    int lena = length(a);
    while (k--)
    {
        char ch = a[lena - 1];
        for (int i = lena - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = ch;
    }
}

int main()
{
    char a[100];
    cin.getline(a, 100);
    int k;
    cin >> k;
    RotateByK(a, k);
    cout << "String a Rotated by " << k << " : " << a << endl;

    return 0;
}