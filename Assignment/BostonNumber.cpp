#include<iostream>
#include<math.h>
using namespace std;

int primeFacSum(int n){
	int pSum = 0;
	while(n % 2 == 0){
		pSum += 2;
		n = n / 2;
	}

	for(int i=3;i<=sqrt(n);i+=2){
		while(n % i == 0){
			int x=i;
			while(x>0){
				pSum += x % 10;
				x /= 10;
			}
			n = n / i;
		}
	}
	if(n > 0){
		while(n > 0){
			pSum += n % 10;
			n /= 10;
		}
	}
	return pSum;

}
int countDigits(int n){
	int digSum = 0;
	while(n != 0){
		int r = n % 10;
		digSum += r;
		n = n / 10;
	}
	return digSum;
}
int main() {
	int n;
	cin>>n;
	if(primeFacSum(n) == countDigits(n)){
		cout<<"1";
	}
	else{
		cout<<"0";
	}

	return 0;
}