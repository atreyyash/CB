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

void StringAppend(char *a, char *b){
    int lena = length(a);
    int lenb = length(b);

    int i = lena, j = 0;
    while(j <= lenb)
    {
        a[i++] = b[j++];
    }
}

int main() {
    char a[100];
    char b[100];
    cin.getline(a, 100);
    cin.getline(b, 100);
    StringAppend(a, b);
    cout << a << endl;

    return 0;
}