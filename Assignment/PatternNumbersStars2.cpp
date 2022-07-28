#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		//Print No. row times
		for(int j=1;j<=i;j++){
			cout<<j;
		}

		//Print stars (n-row times)
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}