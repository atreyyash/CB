// BinarySearch.cpp
#include<iostream>
using namespace std;

void printArray(int *a, int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int BinarySearch(int *a, int s, int e, int key){
	// Base Case
	if(s > e){
		return -1;
	}
	// Recursive Case
	int mid = (s + e) / 2;
	if(a[mid] == key){
		return mid;
	}
	else if(a[mid] < key){
		return BinarySearch(a, mid + 1, e, key);
	}
	else{
		return BinarySearch(a, s, mid - 1, key);
	}
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int key;
	cout << "Enter Key : ";
	cin >> key;

	cout << "Array : ";
	printArray(a, n);
	cout << BinarySearch(a, 0, n - 1, key) << endl;
	
	return 0;
}