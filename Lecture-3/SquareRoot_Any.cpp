#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    float i=1, inc=1, tp=3, cp=1;
    while(cp <= tp){
        while(i*i <= n){
            i+=inc;
        }
        i-=inc;
        inc = inc / 10;
        cp++;
    }
    
    cout<<i<<endl;

    return 0;
}