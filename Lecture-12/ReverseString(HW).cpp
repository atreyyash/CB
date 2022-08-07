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

void reverse(char *a){
    int i = 0;
    int j = length(a)-1;
    while (i < j){
        swap(a[i++], a[j--]);
    }
}

int main() {
    char a[100];
    cin.getline(a, 100);
    reverse(a);
    cout << a << endl;

    return 0;
}