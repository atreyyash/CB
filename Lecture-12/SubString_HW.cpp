#include<iostream>
using namespace std;

void SubStr(char *a){
    for (int i = 0; a[i] != '\0'; i++)
    {
        int j =i;
        while(a[j] != '\0'){
            for (int k = i; k <= j; k++)
            {
                cout << a[k];
            }
            j++;
            cout << endl;
        }
    }
    
}

int main() {
    char a[100];
    cin.getline(a, 100);
    SubStr(a);

    return 0;
}