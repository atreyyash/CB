#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
#include<set>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adj;

    void addEdge(T u, T v, int dist, bool bidir = true)
    {
        adj[u].push_back({v, dist});
        if (bidir)
        {
            adj[v].push_back({u, dist});
        }
    }

    void print()
    {
        for (auto n : adj)
        {
            cout << n.first << " --> ";
            for (auto ch : n.second)
            {
                cout << "(" << ch.first << ", " << ch.second << ") ";
            }
            cout << endl;
        }
    }

    void Dijkstra(T src){
        set<int, T> s;
        unordered_map<T, int> distance;
        unordered_map<T, T> parent;
        // Pahle saare nodes ke distance ko infinite mark kiya
        for(auto n : adj){
            distance[n.first] = INT_MAX;
        }
        // distance src ka src se 0 hoga, aur wahi khud ka parent
        distance[src] = 0;
        parent[src] = src;
        // set me src ko 0 distance ke saath insert kiya
        s.insert({distance[src], src});

        while(!s.empty()){
            // set se node nikalo aur usko father assume karke
            // uske children par iterate karna hai
            auto p = *(s.begin());

            auto father = p.second;
            auto father_dist = p.first;
            
            s.erase(s.begin());
            
            for(auto cp : adj[father]){
                // toh pair me se child aur edge_dist seperate kiya
                auto c = cp.fisrt;
                auto edge_dist = cp.second;
                // agar child ka distance jyada hai 
                // father ke distance + edge_dist se
                // toh uske current distance se kam distance distance me 
                // us tak pahuchne ka rata mil gaya 
                if(distance[father] + edge_dist < distance[c]){
                    // ab agar koi child already set me hai present to usko uda do
                    auto add = s.find({distance[c], c});
                    if(add != s.end()){
                        s.erase(add);
                    }
                    // distance and parent update karo child ka 
                    distance[c] = distance[father] + edge_dist;
                    paren[c] = father;
                    // aur updated distance ke saath, child ko set me daldo 
                    s.insert({distance[c], c});
                }
            }
        }
        
    }
};

int main()
{
    Graph<string> g;
    g.addEdge("Amritsar", "Agra", 1);
    g.addEdge("Delhi", "Agra", 1);
    g.addEdge("Delhi", "Jaipur", 2);
    g.addEdge("Amritsar", "Jaipur", 4);
    g.addEdge("Mumbai", "Jaipur", 8);
    g.addEdge("Mumbai", "Bhopal", 3);
    g.addEdge("Agra", "Bhopal", 2);

    g.print();

    return 0;
}