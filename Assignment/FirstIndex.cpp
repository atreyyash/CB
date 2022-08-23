// FirstIndex.cpp
#include<iostream>
using namespace std;

int FirstM(int *a, int n, int m){
	// Base Case
	if(n == 0){
		return -1;
	}
	// Recursive Case
	if(a[0] == m){
		return 0;
	}
	int ans = FirstM(a + 1, n - 1, m);
	if(ans == -1){
		return -1;
	}
	else{
		return ans + 1;
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	cout << FirstM(a, n, m) << endl;

	return 0;
}