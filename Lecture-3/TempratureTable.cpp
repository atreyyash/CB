#include<iostream>
using namespace std;

int main(){
    int init, fn, step;

    cin>>init>>fn>>step;

    while(init <= fn){
        int c = (5 / 9.0) * (init - 32);
        cout<<init<<"\t"<<c<<endl;
        init+=step;
    }

    return 0;
}