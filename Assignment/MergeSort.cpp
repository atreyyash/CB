#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s, j = mid + 1, k = s;
    while (i <= mid && j <= e)
    {
        if (b[i] < c[j])
        {
            a[k++] = b[i++];
        }
        else
        {
            a[k++] = c[j++];
        }
    }
    while (i <= mid)
    {
        a[k++] = b[i++];
    }
    while (j <= e)
    {
        a[k++] = c[j++];
    }
}

void MergeSort(int *a, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }
    // Recursive Case
    // 1. Divide
    int mid = (s + e) / 2;
    int b[10000], c[10000];
    for (int i = s; i <= mid; i++)
    {
        b[i] = a[i];
    }
    for (int i = mid + 1; i <= e; i++)
    {
        c[i] = a[i];
    }

    // 2. Sort
    MergeSort(b, s, mid);
    MergeSort(c, mid + 1, e);

    // 3. Merge
    merge(a, b, c, s, e);
}

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // printArray(a, n);
    MergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // printArray(a, n);

    return 0;
}