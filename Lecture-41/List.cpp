#include <iostream>
#include <list>
using namespace std;

int main()
{
    // By default this is doubly linked list
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);

    // l.remove(3);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (*it == 3) // jaha par 3 milega vaha par 100 insert ho jayega aur 3 aage shift ho jayega
        {
            l.insert(it, 100);
            break;
        }
    }

    for (auto data : l)
    {
        cout << data << " --> ";
    }
    cout << endl;

    return 0;
}