#include<iostream>
using namespace std;

int countDigit(int n){
	int cnt=0;
	while(n != 0){
		n /= 10;
		cnt++;
	}
	return cnt;
}

int main() {
	int n, evenSum = 0, oddSum = 0;
	cin>>n;
	int length = countDigit(n);
	
	for(int i=1;i<=length;i++){
		int r = n % 10;
		n /= 10;

		// cout<<n<<"\t"<<r<<endl;
		if(i % 2 == 0){
			evenSum += r;
		}
		else{
			oddSum += r;
		}
	}
	cout<<oddSum<<endl;
	cout<<evenSum<<endl;

	return 0;
}