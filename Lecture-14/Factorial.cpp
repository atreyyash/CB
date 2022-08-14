// Factorial.cpp
#include <iostream>
using namespace std;

int fact(int n){
	// 1. Base Case
	if(n == 0){
		return 1;
	}
	// 2. Reccurence Realtion, fact(n) = n* fact(n -1);

	// Hey Recursion hume chota n - 1 ka factorial de do, please (Blind Trust)
	// int chotaFactorial = fact(n - 1);
	// int badaFactorial = n * chotaFactorial;
	// return badaFactorial;

	// This is same as writing above 3 lines. It does not matter whether we store the value in variable
	// or directly return the value
	return n * fact(n - 1);
}

int main(){
	int n;
	cin>>n;
	cout << fact(n);

	return 0;
}