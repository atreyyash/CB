#include<iostream>
using namespace std;

int main() {
    char ch;
    int digits=0, whitespaces=0, alpha=0, other=0;

    ch = cin.get();
    while(ch != '$'){
        if(ch==' ' || ch=='\n' || ch=='\t'){
            whitespaces++;
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            alpha++;
        }
        else{
            other++;
        }
        ch = cin.get();
    }

    cout<<"WhiteSpaces : "<<whitespaces<<endl;
    cout<<"Digits : "<<digits<<endl;
    cout<<"Charecters : "<<alpha<<endl;
    cout<<"Special Charecters : "<<other<<endl;

    return 0;
}