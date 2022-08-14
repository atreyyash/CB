// PrintIncreasing.cpp
#include<iostream>
using namespace std;

void PrintIncreasing(int n){
	// Base Case
	if(n == 0){
		return;
	}
	// Recursive Case
	PrintIncreasing(n - 1);	// Here we calling function before printing and printing n value when coming down the call stack
	cout << n << " ";
}

int main(){
	int n;
	cin>>n;
	PrintIncreasing(n);

	return 0;
}