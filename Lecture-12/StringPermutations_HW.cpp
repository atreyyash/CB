#include<iostream>
using namespace std;

bool IsPermutation(char *a, char *b){
    int freq[26] = {0};

    //Printing abcd just for reference
    char ch = 'a';
    while(ch <= 'z'){
        cout << ch << " ";
        ch++;
    }
    cout << endl;

    // a string par iterate karke freq array ko update karo
    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];
        int idx = ch - 'a';
        freq[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;

    // b string par iterate karke freq array ko update karo
    for (int i = 0; b[i] != '\0'; i++)
    {
        char ch = b[i];
        int idx = ch - 'a';
        freq[idx]--;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 26; i++){
        if (freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main() {
    char a[100] = "aabcd";
    char b[100] = "bacad";

    if (IsPermutation(a, b))
    {
        cout << "Strings are Permutations" << endl;
    }
    else{
        cout << "String are not Permutations" << endl;
    }
    

    return 0;
}