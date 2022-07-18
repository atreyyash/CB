#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //1. Row times Stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //2. Print " "
        cout<<" ";

        //3. Print n-row+1 times stars
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }

        //4. Print " " 
        cout<<" ";

        //5. Print n-row+1 times star
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }

        //6. Print " "
        cout<<" ";
        
        //7. Print row times star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}

/*
N=5
* ***** ***** *
** **** **** **
*** *** *** ***
**** ** ** ****
***** * * *****
*/