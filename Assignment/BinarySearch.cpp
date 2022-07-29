#include<iostream>
using namespace std;

int BinarySearch(int a[1024], int n, int m){
	int lo = 0;
	int hi = n - 1;
	

	while(lo <= hi){
		int mid = (hi + lo) / 2;
		if(a[mid] == m){
			return mid;
		}
		else if(a[mid] > m){
			hi = mid - 1;
		}
		else if(a[mid] < m){
			lo = mid + 1;
		}
	}
	return -1;
}

int main() {
	int a[1024];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;

	int res = BinarySearch(a, n, m);
	cout<<res;

	return 0;
}