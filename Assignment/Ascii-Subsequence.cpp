#include<iostream>
#include<algorithm>
using namespace std;

int count = 0;
int putAscii(char *out, int j, int asci){
    char arr[100];
    int i = 0, cnt = 0;
    // cout << " asci : " << asci << endl;
    while (asci != 0)
    {
        int d = asci % 10;
        asci /= 10;
        char ch = d + '0';
        arr[i] = ch;
        i++;
        cnt++;
    }
    arr[i] = '\0';
    reverse(arr, arr+i);
    for(int i = 0 ; arr[i] != '\0' ; i++){
        out[j++] = arr[i];
    }
    // cout << " out : " << out << endl;
    return cnt;
}

void Subsequence(char *in, char *out, int i, int j){
    // Base Case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
        ::count++;
        return;
    }
    // Recursive Case
    // Ignore ith character
    Subsequence(in, out, i + 1, j);
    // Consider ith character
    out[j] = in[i];
    Subsequence(in, out, i + 1, j + 1);
    // Take ascii of ith character
    int asci = in[i];
    int cnt = putAscii(out, j, asci);
    // cout << "Cnt : " << cnt << endl;
    Subsequence(in, out, i + 1, j + cnt);
    // cout << "out : " <<  out << endl;
}

int main() {
    char in[100000];
    char out[10000];
    cin >> in;
    Subsequence(in, out, 0, 0);
    cout << endl << ::count << endl;

    return 0;
}