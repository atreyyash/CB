#include<iostream>
using namespace std;

int main() {
    char ch;
    int cnt=0;
    //To read white space characters 
    //We Use, 
    ch = cin.get();
    
    while(ch!='$'){
        cnt++;
        ch = cin.get(); //Updation
        // cin>>ch;  //Updation
    }

    // for(;ch!='$';cin>>ch){
    //     cnt++;
    // }
    cout<<cnt<<endl;

    return 0;
}