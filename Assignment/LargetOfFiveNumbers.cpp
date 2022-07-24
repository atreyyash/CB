#include<iostream>
#include<climits>
using namespace std;

int main () {
	int max = INT_MIN;
	int a;
	for(int i=1;i<=5;i++){
		cin>>a;
		if(a>max){
			max = a;
		}
	}
	cout<<max;
	return 0;
}