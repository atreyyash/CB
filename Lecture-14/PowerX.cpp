// PowerX.cpp
#include<iostream>
using namespace std;

int PowerX(int x, int n){
	// Base Case
	if(n == 0){
		return 1;
	}
	// Recursive Case
	return x * PowerX(x, n - 1);
}

int main(){
	int n, x;
	cin >> x >> n;
	cout << PowerX(x, n);

	return 0;
}