// OddEvenUsingRecursion.cpp
#include<iostream>
using namespace std;

void Print(int n){
	// Base Case
	if(n == 0){
		return;
	}
	// Recursive Case
	if(n % 2 != 0){
		cout << n << endl;
	}
	Print(n - 1);
	if(n % 2 == 0){
		cout << n << endl;
	}
}

int main() {
	int n;
	cin >> n;

	Print(n);

	return 0;
}