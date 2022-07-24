#include<iostream>
using namespace std;

void printTable(int init, int fval, int step){
    while(init <= fval){
    int c = (5 / 9.0) * (init - 32);
    cout<<init<<"\t"<<c<<endl;
    init+=step;
    }
}

int main() {
    int init, fval, step;
    cin>>init>>fval>>step;

    printTable(init, fval, step);

    return 0;
}