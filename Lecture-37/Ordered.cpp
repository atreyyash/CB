#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> h;

    // 1st way of inertion
    pair<string, int> p;
    p.first = "Mango";
    p.second = 100;
    h.insert(p);

    // 2nd way of insertion
    pair<string, int> p1("Kiwi", 50);
    h.insert(p1);

    // 3rd way of insertion
    h.insert({"Banana", 150});

    // 4th way of insertion
    h.insert(make_pair("Orange", 200));

    // for each pair p that belongs to hashmap p
    // for(pair<string, int> p : h)
    for (auto p : h)
    {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}