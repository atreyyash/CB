// LastIndexOfM.cpp
#include<iostream>
using namespace std;

int LastM(int *a, int n, int i, int m){
	// Base Case
	if(i == n){
		return -1;
	}
	// Recursive Case
	if(a[i] == m){
		int ans = LastM(a, n, i + 1, m);
		return max(i, ans);
	}
	else{
		return LastM(a, n, i + 1, m);
	}
}

int main() {
	int a[100000];
	int n, m;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> m;

	cout << LastM(a, n, 0, m) << endl;

	return 0;
}