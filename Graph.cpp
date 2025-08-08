#include <bits/stdc++.h>
using namespace std;

class Graph
{

    vector<vector<int>> A;
    int n, m;

public:
    Graph(int rows, int columns)
    {
        n = rows;
        m = columns;
        A.resize(n, vector<int>(m, 0));
    }

    void addEdge(int i, int j)
    {
        if (i >= 0 && i < n && j >= 0 && j < m)
        {
            A[i][j] = 1;
            A[i][j] = 1;
        }
        else
        {
            cout << "Invalid Access for " << i << " and " << j << endl;
        }
    }

    void display()
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    Graph g(3, 3);
    
    g.addEdge(1, 2);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(1, 1);

    // g.addEdge(1, 3);

    g.display();

    return 0;
}