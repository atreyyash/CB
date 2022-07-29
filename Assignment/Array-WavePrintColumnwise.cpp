#include<iostream>
using namespace std;

int main() {
	int a[10][10];
	int row, col;
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}

	for(int j=0;j<col;j++){
		if(j % 2 == 0){
			//Even
			for(int i=0;i<row;i++){
				cout<<a[i][j]<<", ";
			}
		}
		else{
			//ODD
			for(int i=row-1;i>=0;i--){
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END";
	
	return 0;
}