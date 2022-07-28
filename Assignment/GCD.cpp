#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cin>>n1>>n2;

    int lcm = max(n1, n2);

    while(1){
        if(lcm % n1 == 0 && lcm % n2 == 0){
            cout << lcm << endl;
            break;
        }
        lcm++;
    }

    int gcd = (n1 * n2) / lcm;
    cout << gcd << endl;

    return 0;
}