#include<iostream>
using namespace std;

//Any of the declaration is used.
//Now these function can be used anywhere in any order.
// bool checkPrime(int n);
bool checkPrime(int);
// void PrintAllPrimes(int n);
void PrintAllPrimes(int);

int main() {
    int n;
    cin >> n;

    PrintAllPrimes(n);

    return 0;
}

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void PrintAllPrimes(int n){
    for(int no = 2 ; no <= n ; no++){
        if(checkPrime(no) == true){
            cout<< no << " ";
        }
    }
    cout << endl;
}