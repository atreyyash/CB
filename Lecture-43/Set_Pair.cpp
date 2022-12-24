#include<iostream>
#include<set>
using namespace std;

int main() {
    set<pair<int, int>> s;
    s.insert({4, 2});
    s.insert({6, 1});
    s.insert({3, 20});
    s.insert({2, 12});
    s.insert({1, 9});

    while(!s.empty()){
        auto address = s.begin();
        auto p = *address;
        cout << p.first << ", " << p.second << endl;
        s.erase(address);
    }

    return 0;
}