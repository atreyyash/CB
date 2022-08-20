// 43_IsPalindrome.cpp

#include<iostream>
using namespace std;

int stringLength(char *s){
    char ch = s[0];
    int cnt = 0, i=1;
    while(ch != '\0'){
        cnt++;
        ch = s[i++];
    }
    return cnt;
}

int main()
{
    char a[100], s, l;
    bool isPalindrome = true;
    cin.getline(a, 100);
    int i = 0, j = stringLength(a) - 1;
    
    while(i <= j){
        if(a[i++] != a[j--]){
            isPalindrome = false;
            break;
        }
    }
    
    if(isPalindrome == true){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}