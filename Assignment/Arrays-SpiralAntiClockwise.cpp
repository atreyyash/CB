#include<iostream>
using namespace std;

int main() {
    int a[10][10];
    int row, col;
    cin >> row >> col;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>a[i][j];
        }
    }

    int sr = 0, er = row - 1, sc = 0, ec = col - 1;
    while(sr <= er && sc <= ec){
        //Print sc from sr to er
		for(int i=sr;i<=er;i++){
			cout<<a[i][sc]<<", ";
		}
		sc++;

		//Print er from sc to sc
		for(int i=sc;i<=ec;i++){
			cout<<a[er][i]<<", ";
		}
		er--;

		//Print ec from er to sr
		for(int i=er;i>=sr;i--){
			cout<<a[i][ec]<<", ";
		}
		ec--;

		//Print sr from ec to sc
		for(int i=ec;i>=sc;i--){
			cout<<a[sr][i]<<", ";
		}
		sr++;
    }
	cout<<"END";

    return 0;
}