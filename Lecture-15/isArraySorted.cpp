// isArraySorted.cpp
#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n)
{
	// Base Case
	if (n <= 1)
	{
		return true;
	}
	// Recursive Case
	if (a[0] <= a[1] && isArraySorted(a + 1, n - 1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isArraySorted1(int *a, int n)
{
	// Base Case
	if (n <= 1)
	{
		return true;
	}
	// Recursive Case
	bool kyaChotaSortedHai = isArraySorted1(a, n - 1);
	if (a[n - 1] >= a[n - 2] && kyaChotaSortedHai)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isArraySorted2(int *a, int n, int i)
{
	// Base Case
	if (i == n - 1)
	{
		return true;
	}
	// Recursive Case
	bool kyaArraySortedHai = isArraySorted2(a, n, i + 1);
	if (a[i] <= a[i + 1] && kyaArraySortedHai)
	{
		return true;
	}
	return false;
}

int main()
{
	int a[] = {1, 3, 4, 6, 7};
	int n = sizeof(a) / sizeof(int);

	bool ans = isArraySorted2(a, n, 0);
	if (ans)
	{
		cout << "Array Sorted!" << endl;
	}
	else
	{
		cout << "Array not Sorted!" << endl;
	}

	return 0;
}