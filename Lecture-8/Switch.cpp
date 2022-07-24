#include<iostream>
using namespace std;

int main() {
    //Switch only works on Integer & character
    char ch;
    cin>>ch;

    switch(ch){
        case 'N':
        case 'n':
            cout<<"North\n";
            break;
        case 'E':
        case 'e':
            cout<<"East\n";
            break;
        case 'S':
        case 's':
            cout<<"South\n";
            break;
        case 'W':
        case 'w':
            cout<<"West\n";
            break;
        default:
            cout<<"Galat Direction\n";
            break;

    }

    return 0;
}