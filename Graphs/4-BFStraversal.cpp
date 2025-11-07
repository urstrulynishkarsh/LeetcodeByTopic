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

    void BfsTraversal(int &src)
    {
        queue<int> q;
        unordered_map<int,bool> visited;

        q.push(src);
        visited[src]=true;

        while(!q.empty())
        {
            int frontNode=q.front();
            cout<<frontNode<<",";
            q.pop();

            for(auto neighbour:adjlist[frontNode])
            {
                int node=neighbour.first;
                int weight=neighbour.second;
                if(!visited[node])
                {
                    q.push(node);
                    visited[node]=true;
                }
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

    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;

    g.BfsTraversal(start);

}

