#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<datatype> name;
    vector<int> v;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Inserting: " << i << " : ";
        v.push_back(i);
        cout << " Size : " << v.size() << ", Capacity : " << v.capacity() << endl;
    }

    // Vector Initialization
    // 1st Way
    vector<int> v1({1, 2, 3, 4, 5});
    cout << "1st Vector v1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl << endl;

    // 2nd Way
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "2nd Way Vector v2 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl << endl;

    // 3rd Way
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);
    vector<int> v3(a, a + n);
    cout << "3rd Way Vector v3 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl << endl;

    return 0;
}