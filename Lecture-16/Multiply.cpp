// Multiply.cpp
#include<iostream>
using namespace std;

int Mul(int a, int b){
	// Base Case
	if(b == 0){
		return 0;
	}
	// Recursive Case
	return a + Mul(a, b - 1);
}

int main(){
	int n , m;
	cin >> n >> m;
	cout << Mul(n, m) << endl;
	
	return 0;
}