// Last7.cpp
#include<iostream>
using namespace std;

void printArray(int *a, int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int Last7(int *a, int n, int i){
	// Base Case
	if(i == n){
		return -1;
	}
	// Recursive Case
	if(a[i] == 7){
		int ans = Last7(a, n, i + 1);
		return max(ans, i);
	}
	else{
		return Last7(a, n, i + 1);
	}
}

void All7(int *a, int n, int i){
	// Base Case
	if(i == n){
		return;
	}
	// Recursive Case
	if(a[i] == 7){
		cout << i << " ";
	}
	All7(a, n, i + 1);
}

int main(){
	int a[] = {1, 2, 7, 7, 7, 7, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	cout << Last7(a, n, 0) << endl;

	cout << "All Occurances of 7 are : ";
	All7(a, n, 0);
	
	return 0;
}