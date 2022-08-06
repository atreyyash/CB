#include<iostream>
using namespace std;

void ReadString(char *a, int s, char delimiter = '\n')  //Default delimiter is '\n'
{
    char ch;
    int i=0;
    ch = cin.get();
    for (; i < s - 1 && ch != delimiter;)
    {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
}

int main() {
    char a[100];
    // cin >> a;    //Cin ignores whitespaces hence stop reading after space
    // ReadString(&a[0]);   //This is same as passing ReadString(a) bcz name of array stores the first address of the bucket
    // ReadString(a, 100);
    cin.getline(a, 100);    //cin.getline works as the same as ReadString funct.
    cout << a;

    return 0;
}