// First7.cpp
#include <iostream>
using namespace std;

int First7(int *a, int n){
	// Base Case
	if(n == 0){
		return -1;
	}
	// Recursive Case
	if (a[0] == 7)
	{
		return 0;
	}
	int ans = First7(a + 1, n - 1);
	if(ans == -1){ 
		return -1;
	}
	else{
		return ans + 1;
	}
}

int First7_2(int *a, int n, int i){
	// Base Case
	if(i == n){
		return -1;
	}
	// Recursive Case
	if(a[i] == 7){
		return i;
	}

	int ans = First7_2(a, n, i + 1);
	return ans;
}

int main(){
	int a[] = {1, 2, 7, 3, 6, 7, 7, 8, 7};
	int n = sizeof(a) / sizeof(int);

	cout << "First Occurrence of 7 is at " << First7(a, n) << endl;
	cout << "First Occurrence of 7 with iterator method is at " << First7_2(a, n, 0) << endl;

	return 0;
}