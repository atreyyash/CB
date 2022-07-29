#include<iostream>
using namespace std;

void BubbleSort(int a[100000], int n){

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main () {
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	BubbleSort(a, n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}