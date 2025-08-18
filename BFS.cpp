#include <bits/stdc++.h>
using namespace std;

class Graph
{

public:
    unordered_map<int, list<int>> adj;

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

    void BFS(int start)
    {
        unordered_map<int, bool> visited;
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (auto neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    Graph g;
    int n, m;
    cout << "Enter No. of Nodes : ";
    cin >> n;
    cout << "Enter No. of Edges : ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout<<"Enter Edge "<<i+1<<" : ";
        cin >> u >> v;
        g.addEdge(u, v);
    }

    g.print();

    int start;
    cout << "Enter start node for BFS: ";
    cin >> start;

    g.BFS(start);

    return 0;
}