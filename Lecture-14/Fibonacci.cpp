// Fibonacci.cpp
#include<iostream>
using namespace std;

int fibo(int n){
	// Base Case 
	if(n == 0 || n == 1){
		return n;
	}
	// Recursive Case
	return fibo(n - 1) + fibo(n - 2);
}

// For base case n == 0 || n == 1
// we don't know the fibonacci term for negative numbers
// So we will have to stop program before program goes for negative

int main(){
	int n;
	cin >> n;

	cout << fibo(n);

	return 0;
}