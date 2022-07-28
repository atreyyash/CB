#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;

	int i=1;
	while(i<=n){
		//Spaces (n-row) times
		for(int j=1;j<=n-i;j++){
			cout<<" "<<" ";
		}
		
		//Star row times
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		i++;
	}
	return 0;
}