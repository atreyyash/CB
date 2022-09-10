#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    *a = 10;
    cout << *a << endl;

    float *f = new float;
    *f = 1.11;
    cout << *f << endl;

    /////////////////////CREATE ARRAY /////////////////////////////////
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // if we delete the memory that we have created in heap.
    // then the pointer will be pointing to a garbage value
    // it should point to null and if defer a null pointer it will give segmentation fault.
    int *x = new int;
    *x = 1000;

    cout << *x + 20;

    delete x;
    x = NULL;

    cout << *x << endl;

    return 0;
}