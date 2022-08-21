// MergeTwoArray.cpp
#include<iostream>
using namespace std;

void printArray(int *a, int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(int *a, int *b, int *c, int n, int m){
	int i = 0, j = 0, k = 0;

	while(i < n && j < m){
		if(b[i] < c[j]){
			a[k++] = b[i++];
		}
		else{
			a[k++] = c[j++]; 
		}
	}

	while(j < m){
		a[k++] = c[j++];
	}
	while(i < n){
		a[k++] = b[i++];
	}
}

int main(){
	int a[100];
	int b[] = {2, 4, 5, 7};
	int c[] = {1, 3, 6, 8, 9, 10};
	int n = sizeof(b) / sizeof(int);
	int m = sizeof(c) / sizeof(int);

	merge(a, b, c, n, m);
	cout << "B : ";
	printArray(b, n);
	cout << "C : ";
	printArray(c, m);
	cout << "A : ";
	printArray(a, m+n);

	return 0;
}