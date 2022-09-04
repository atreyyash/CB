#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v(number_of_buckets, initial_value);
    vector<int> v1(10, -1);
    // vector<int> v(10000);   // Capacity : 10000
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;

    reverse(v.begin(), v.end());
    cout << "Reversed Vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    // v.clear(); // ye function size ko 0 kar deta hai capacity same rahti hai

    return 0;
}