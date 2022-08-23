// RecursionPatternTriangle.cpp
#include<iostream>
using namespace std;

void PrintTriangle(int n, int i, int j){
	// Base Case
	if(i == n){
		return;
	}
	// Recursive Case
	if(j <= i){
		cout << "*" << "\t";
		PrintTriangle(n, i, j + 1);
	}
	else{
		cout << endl;
		PrintTriangle(n, i + 1, 0);
	}
}

int main() {
	int n;
	cin >> n;
	PrintTriangle(n, 0, 0);

	return 0;
}