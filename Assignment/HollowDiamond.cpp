#include<iostream>
using namespace std;

//This technique of printing pattern is called mirror pattern technique
//i.e. we make the first part of the pattern and then copy the same code for the first in the dec loop 
//*    *    *    *    *     --Row-1
//*    *         *    *     --Row-2
//*                   *     --Row-3
//*    *         *    *     --Row-4
//*    *    *    *    *     --Row-5
//In this type of pattern the work done for 1st row and last row are same
//Similarly the work for 2nd and 4th is same
//That is why we call it a mirror pattern.
int main() {
	int n;
	cin>>n;

	int nd = (n+1) / 2;
	for(int i=1;i<=nd;i++){
		if(i == 1){
			for(int j=1;j<=n;j++){
				cout<<"*"<<"\t";
			}
		}
		else{
			//Print  * nd - row + 1 times
			for(int j=1;j<=nd-i+1;j++){
				cout<<"*"<<"\t";
			}
			
			//Print 2 * (row - 1) -1 times spaces
			for(int j=1;j<=2 * (i-1) - 1; j++){
				cout<<" "<<"\t";
			}

			//Print  * nd - row + 1 times
			for(int j=1;j<=(nd-i)+1;j++){
				cout<<"*"<<"\t";
			}
		}
		cout<<endl;
	}
	for(int i=nd-1;i>=1;i--){
		if(i == 1){
			for(int j=1;j<=n;j++){
				cout<<"*"<<"\t";
			}
		}
		else{
			//Print  * n times
			for(int j=1;j<=nd-i+1;j++){
				cout<<"*"<<"\t";
			}
			
			//Print 2 * (row - 1) -1 times spaces
			for(int j=1;j<=2 * (i-1) - 1; j++){
				cout<<" "<<"\t";
			}

			//Print  * n times
			for(int j=1;j<=nd-i+1;j++){
				cout<<"*"<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
}