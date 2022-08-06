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

bool CheckPalindrome(char *a){
    int i = 0;
    int j = length(a) - 1;
    while(i <= j){
        if(a[i++] != a[j--]){
            return false;
        }
    }
    return true;
}

int main() {
    char a[100];
    cin.getline(a, 100);
    bool ans = CheckPalindrome(a);
    if(ans){
        cout << "String is Palindrome" << endl;
    }
    else{
        cout << "String is not Palindrome" << endl;
    }

    return 0;
}