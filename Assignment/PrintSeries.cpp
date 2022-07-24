#include<iostream>
using namespace std;

int main() {
	int N1, N2;
	cin>>N1>>N2;

	int i=0, t=0, n=1;
	while(i<N1){
		t = 3 * n + 2;
		if(t % N2 != 0){
			cout<<t<<endl;
			i++;
		}
		n++;
	}
	return 0;
}