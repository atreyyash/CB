#include <iostream>
#include <set>
using namespace std;

// Properties of Set
// 1. Duplicate entries aren't allowed
// 2. Data will automatically sorted in set

int main()
{
    // Declaration
    set<int> s;
    // Insertion
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(3);

    // Printing Set
    cout << "Printing Output : ";
    for(auto e : s){
        cout << e << " ";
    }
    cout << endl;

    // Find or Search
    auto address = s.find(4);
    if(address != s.end()){
        cout << "Found: " << *address << endl;
    }
    else{
        cout << "Not Found\n";
    }

    // Deletion in Set
    while(!s.empty()){
        cout << *s.begin() << " ";
        s.erase(s.begin());
    }

    return 0;
}