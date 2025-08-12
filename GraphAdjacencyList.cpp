#include <bits/stdc++.h>
using namespace std;

class Graph
{
    
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int n,int m,bool direction=0){
        adj[n].push_back(m);
        if(direction==0){
            adj[m].push_back(n);
        }
    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }


   
};

int main()
{
    Graph g;
    int n,m;
    cout<<"Enter No. of Nodes : ";
    cin>>n;
    cout<<"Enter No. of Edges : ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,1);
    }

    g.print();
   

    return 0;
}