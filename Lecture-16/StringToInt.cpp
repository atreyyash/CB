// StringToInt.cpp
#include<iostream>
#include<cstring>
using namespace std;

int StringTOInt(char *a, int n){
	// Base Case
	if(n == 0){
		return 0;
	}
	// Recursive Case
	int ld = a[n - 1] - '0';
	return StringTOInt(a, n - 1) * 10 + ld;

	/*
	-------Alternative Way----------
	int ld = a[n - 1] - '0';
	int ca = StringToInt(a, n - 1);
	return ca * 10 + ld;
	--------------------------------
	*/
}

int main(){
	char a[] = "123456";
	int n = strlen(a);

	cout << "String : " << a << endl;
	cout << "Int    : " << StringTOInt(a, n) << endl;
	
	return 0;
}