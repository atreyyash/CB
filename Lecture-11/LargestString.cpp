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

void copy(char *a, char *b){
    int i = 0;
    int j = 0;
    while(b[j] != '\0'){
        a[i++] = b[j++];
    }
    a[i] = '\0';
}

int main() {
    char a[100], largest[100];
    int n, largest_len;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n;i++){
        cin.getline(a, 100);
        int lena = length(a);
        if(lena > largest_len){
            copy(largest, a);
            largest_len = lena;
        }
    }
    cout << "Largest Len : " << largest_len << endl;
    cout << "Largest String : " << largest << endl;

    return 0;
}