#include<iostream>
using namespace std;

void InsertionSort(int a[1000], int n){
	int j;
	for(int i=1;i<n;i++){
		int pc = a[i];
		for(j=i-1;j>=0;j--){
			if(a[j] > pc){
				a[j+1] = a[j];
			}
			else{
				break;
			}
		}
		a[j+1] = pc;
	}
}

int main() {
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	InsertionSort(a, n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}