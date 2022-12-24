#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;
// Runner().gameOver = ()=>{}

template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adj;
    void addEdge(T u, T v, bool bidir = true)
    {
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto p : adj)
        {
            cout << p.first << " --> ";
            for (auto neighbour : p.second)
            {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }

    void BFS(T src, T des)
    {
        unordered_map<T, bool> visited;
        unordered_map<T, T> parent;
        queue<T> q;
        q.push(src);

        visited[src] = true;
        parent[src] = src;

        while (!q.empty())
        {
            T father = q.front();
            q.pop();
            cout << father << " ";
            for (auto ch : adj[father])
            {
                if (!visited[ch])
                {
                    visited[ch] = true;
                    parent[ch] = father;
                    q.push(ch);
                }
            }
        }

        cout << endl;

        // Printing the Path
        while (des != parent[des])
        {
            cout << des << " <-- ";
            des = parent[des];
        }
        cout << des << endl;
    }
};

int main()
{
    Graph<int> g;
    // g.addEdge("Vaibhav", "Lakshya");
    // g.addEdge("Yash", "Lakshay");
    // g.addEdge("Yash", "Prabhnoor");
    // g.addEdge("Varun", "Prabhnoor");
    // g.addEdge("Barbie", "Rajas");
    // g.addEdge("Barbie", "Prabhnoor");

    g.addEdge(0, 1);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(0, 4);
    g.addEdge(0, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 2);
    g.addEdge(3, 5);

    g.print();

    g.BFS(0, 5);

    return 0;
}
