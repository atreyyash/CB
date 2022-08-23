// RecursionNthTriangle.cpp
#include<iostream>
using namespace std;

int Triangle(int n){
	// Base Case 
	if(n == 0){
		return 0;
	}
	// Recursive Case
	return n + Triangle(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << Triangle(n);

	return 0;
}