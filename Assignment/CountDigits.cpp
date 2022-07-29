#include<iostream>
using namespace std;

int countDigit(int n, int digit){
	int cnt = 0;
	
	while(n != 0){
		int r = n % 10;
		if(r == digit){
			cnt++;
		}
		n /= 10;
	}
	return cnt;
}

int main() {
	int n;
	int digit;
	cin>>n>>digit;
	int res = countDigit(n, digit);
	cout<<res;

	return 0;
}