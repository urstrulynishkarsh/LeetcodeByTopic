#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;


class Graph{
    public:
    unordered_map<int,list<pair<int,int> > > adjlist;

    void addedge(int u, int v, int weight, bool direction)
    {
        if(direction==0)
        {
            adjlist[u].push_back({v,weight});
            adjlist[v].push_back({u,weight});
        }
        else{
            adjlist[u].push_back({v,weight});
        }
    }


    void dfshelper(int src, unordered_map<int,bool> &visited)
    {
        visited[src]=true;
        cout<<src<<",";

        for(auto nbr:adjlist[src])
        {
            int node=nbr.first;
            if(!visited[node])
            {
                dfshelper(node,visited);
            }
        }
    }

    void DfsTraversal(int n)
    {
        unordered_map<int,bool> visited;

        for(int src=0;src<n;src++)
        {
            if(!visited[src])
            {
                dfshelper(src,visited);
            }
        }
    }


};

int main(){

    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    int e;
    cout<<"Enter the number of edges: ";
    cin>>e;

    Graph g;
    for(int i=0;i<e;i++)
    {
         int u,v,w;
         cin>>u>>v>>w;
         // we are doing directed weighted graph
         g.addedge(u,v,w,0);
    }

    g.DfsTraversal(n);

}

