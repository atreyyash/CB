#include<iostream>
using namespace std;
int main() {
	int n;
	bool flag=1;
	cin>>n;

	int i=2;
	while(i<=n){
		int j=2;
		while(j < i){
            if(i % j == 0){
                flag = 0;
            }
            j++;
		}
		if(flag==1){
            cout<<i<<endl;
		}
		i++;
		flag = 1;
	}
	return 0;
}