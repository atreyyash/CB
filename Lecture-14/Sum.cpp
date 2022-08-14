// Sum.cpp
#include <iostream>
using namespace std;

int Sum(int n){
	// Base Case
	if (n == 0)
	{
		return 0;
	}
	// Recursive Case, Sum(n) = n + Sum(n - 1); 

	// int chotaSum = Sum(n - 1);
	// int badaSum = n + chotaSum;
	// return badaSum;

	return n + Sum(n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << Sum(n);
	
	return 0;
}