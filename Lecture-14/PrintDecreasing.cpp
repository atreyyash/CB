// PrintDecreasing.cpp
#include<iostream>
using namespace std;

void PrintDecreasing(int n){
	// Base Case
	if(n == 0){
		return;
	}
	// Recursive Case
	cout << n << " ";	// Here we are printing the value of n before calling function hence we will print decreasing number
	PrintDecreasing(n - 1);
}

int main(){
	int n;
	cin >> n;

	PrintDecreasing(n);

	return 0;
}