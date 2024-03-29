// MergeSort.cpp
#include<iostream>
using namespace std;

void printArray(int *a, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(int *a, int *b, int *c, int s, int e) {
	int m = (s + e) / 2;
	int i = s, j = m + 1, k = s;

	while (i <= m && j <= e) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}

	while (j <= e) {
		a[k++] = c[j++];
	}
	while (i <= m) {
		a[k++] = b[i++];
	}
}

void MergeSort(int *a, int s, int e) {
	// Base Case
	if (s >= e) {
		return;
	}
	// Recursive Case

	// 1. Divide
	int b[1000], c[1000];
	int mid = (s + e) / 2;
	for (int i = s; i <= mid; ++i)
	{
		b[i] = a[i];
	}
	for (int i = mid + 1; i <= e; ++i)
	{
		c[i] = a[i];
	}

	// 2. Sort
	MergeSort(b, s, mid);
	MergeSort(c, mid + 1, e);

	// 3. Merge
	merge(a, b, c, s, e);
}

int main() {
	int a[] = {4, 3, 1, 6, 2, 5};
	int n = sizeof(a) / sizeof(int);

	cout << "Before Sorting : ";
	printArray(a, n);
	MergeSort(a, 0, n - 1);
	cout << "After Sorting : ";
	printArray(a, n);

	return 0;
}