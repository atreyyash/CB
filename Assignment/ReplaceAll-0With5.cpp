#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;
	int nn=0, div = 1;
	while(n != 0){
		int r = n % 10;
		n /= 10;
		if(r == 0){
			r = 5;
		}
		nn = nn + div * r;
		div = div * 10;
	}
	cout<<nn;

	return 0;
}