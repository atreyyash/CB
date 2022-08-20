// Check7.cpp
#include<iostream>
using namespace std;

bool Check7(int *a, int n){
	// Base Case
	if(n == 0){
		return false;
	}
	// Recursive Case
	if (a[0] == 7)
	{
		return true;
	}
	return Check7(a + 1, n - 1);

}


int main(){
	int a[] = {1, 2, 7, 3, 6, 7, 7, 8, 7};
	int n = sizeof(a) / sizeof(int);

	int ans = Check7(a, n);
	if(ans){
		cout <<"7 is present" << endl;
	}
	else{
		cout << "7 is not present" << endl;
	}

	return 0;
}