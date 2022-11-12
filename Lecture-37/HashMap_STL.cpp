#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> h;

    h.insert({"Mango", 100});
    h.insert({"Kiwi", 80});
    h.insert({"Gauva", 150});
    h.insert({"Orange", 120});
    h.insert({"Peach", 250});
    h["Banana"] = 80;
    h["Mango"] = 120;

    // Iterator definition
    unordered_map<string, int>::iterator it;    // if you dont want to declare the iterator like this way then use auto keyword

    // for (int i = 0; i < h.bucket_count(); i++)
    // {
    //     cout << i << "-->";
    //     for ( it = h.begin(i); it != h.end(i); it++)
    //     {
    //         // (*it).first , (*it).second
    //         cout << it->first << " " << it->second << endl;
    //     }
        
    // }
    // Another Way to print
    for (it = h.begin(); it != h.end(); it++)
    {
        // (*it).first , (*it).second
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}