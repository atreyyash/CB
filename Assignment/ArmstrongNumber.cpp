#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int temp = n, arm = 0;

	int cnt = 0, tmp=n;
	while(tmp!=0){
		tmp = tmp / 10;
		cnt++;
	}

	while(n!=0){
		int r = n % 10;
		arm = arm + pow(r, cnt);
		n = n / 10;
	}
	if(temp == arm){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}