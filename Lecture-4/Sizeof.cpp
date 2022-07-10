#include<iostream>
using namespace std;

int main() {
    cout<<"Int size : "<<sizeof(int)<<endl;
    cout<<"float size : "<<sizeof(float)<<endl;
    cout<<"double size : "<<sizeof(double)<<endl;
    cout<<"bool size : "<<sizeof(bool)<<endl;
    cout<<"char size : "<<sizeof(char)<<endl;
    cout<<"sizeof 10.11 : "<<sizeof(10.11)<<endl;   //By Default the value will be double


    return 0;
}