#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int size;

public:
    Graph(int size)
    {
        this->size = size;
    }
    unordered_map<int, list<int>>
        adj;

    void addEdge(int n, int m, bool direction = 0)
    {
        adj[n].push_back(m);
        if (direction == 0)
        {
            adj[m].push_back(n);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }

    void DFSUtil(int node, vector<bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";

        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                DFSUtil(neighbor, visited);
            }
        }
    }

    void DFS(int start)
    {
        vector<bool> visited(size, false);
        cout << "DFS Traversal: ";
        DFSUtil(start, visited);
        cout << endl;
    }
};

int main()
{
    int n, m;
    cout << "Enter No. of Nodes : ";
    cin >> n;
    cout << "Enter No. of Edges : ";
    cin >> m;

    Graph g(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter Edge " << i + 1 << " : ";
        cin >> u >> v;
        g.addEdge(u, v);
    }

    g.print();

    int start;
    cout << "Enter start node for DFS: ";
    cin >> start;

    g.DFS(start);

    return 0;
}