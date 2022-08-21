// BubbleSort.cpp
#include<iostream>
using namespace std;

void printArray(int *a, int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// Bubble Sort one for loop
void BubbleSort(int *a, int n, int i){
	// Base Case
	if(i == n){
		return;
	}
	// Recurisve Case
	for(int j = 0; j < n - 1 - i; j++){
		if(a[j] > a[j + 1]){
			swap(a[j], a[j + 1]);
		}
	}
	BubbleSort(a, n, i + 1);
}

void BubbleSort1(int *a, int n, int i, int j){
	// Base Case
	if(i == n){
		return;
	}
	// Recursive Case
	if(j < n - 1 - i){
		if(a[j] > a[j + 1]){
			swap(a[j], a[j + 1]);
		}
		BubbleSort1(a, n, i, j + 1);
	}
	else{
		BubbleSort1(a, n, i + 1, 0);
	}
}

int main(){
	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	cout << "Before Sorting : ";
	printArray(a, n);
	BubbleSort1(a, n, 0, 0);
	cout << "After Sorting  : ";
	printArray(a, n);
	
	return 0;
}