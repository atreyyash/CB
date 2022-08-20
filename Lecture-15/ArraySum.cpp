#include <iostream>
using namespace std;

int ArraySum(int *a, int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    // Recursive Case
    // int chotaSum = ArraySum(a + 1, n - 1);
    // return a[0] + chotaSum;
    return a[0] + ArraySum(a + 1, n - 1);
}

int ArraySum1(int *a, int n, int i){
    // Base Case
    if(i == n){
        return 0;
    }
    // Recursive Case
    return a[i] + ArraySum1(a, n, i + 1);
}

int ArraySum2(int *a, int n){
    // Base Case
    if(n == 0){
        return 0;
    }
    // Recursive Case
    return a[n - 1] + ArraySum(a, n - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);

    cout << "Sum of Array returned by a+1,n-1 method : " << ArraySum(a, n) << endl;
    cout << "Sum of Array returned by iterator method : " << ArraySum1(a, n, 0) << endl;
    cout << "Sum of Array returned by n-1 method : " << ArraySum2(a, n) << endl;

    return 0;
}