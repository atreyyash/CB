#include<iostream>
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

void RotateStringByK(char *a, int n){
    int lena = length(a);
    
    // 1. Shift All characters n position ahead
    int i = lena - 1;
    while (i >= 0){
        a[i + n] = a[i];
        i--;
    }
    cout << a << endl;

    // 2. Bring last n characters to front
    int j = 0;
    i = lena;
    while (j < n){
        a[j++] = a[i++];
    }
    cout << a << endl;

    // 3. Add '\0' at lena index
    a[lena] = '\0';
}

int main() {
    char a[100];
    cin.getline(a, 100);
    int k;
    cin >> k;
    k = k % length(a);
    RotateStringByK(a, k);
    cout << a << endl;

    return 0;
}