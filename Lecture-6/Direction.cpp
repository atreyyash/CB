#include<iostream>
using namespace std;

int main() {
    char ch;
    ch = cin.get();
    int x=0, y=0;

    while(ch != '\n'){
        if(ch=='N'){
            y++;
        }
        else if(ch=='S'){
            y--;
        }
        else if(ch=='E'){
            x++;
        }
        else if(ch=='W'){
            x--;
        }
        ch = cin.get();
    }

    if(x>=0 && y>= 0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }
    }
    else if(x<0 && y>=0){
        while(y--){
            cout<<"N";
        }
        x = abs(x);
        while(x--){
            cout<<"W";
        }
    }
    else if(x<0 && y<0){
        y = abs(y);
        while(y--){
            cout<<"S";
        }
        x = abs(x);
        while(x--){
            cout<<"W";
        }
    }
    else{
        while(x--){
            cout<<"E";
        }
        y = abs(y);
        while(y--){
            cout<<"S";
        }
    }

    return 0;
}