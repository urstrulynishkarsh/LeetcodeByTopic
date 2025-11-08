#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int> > adjacencyList;

    void addEdge(int u, int v,bool direction)
    {
        adjacencyList[u].push_back(v);
        if(direction==0)
        {
            adjacencyList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for(auto i:adjacencyList)
        {
            int node=i.first;
            cout<<node<<": {";
            auto &neighbors=i.second;
            bool first=true;

            for(auto &nbr:neighbors)
            {
                if (!first) cout << ", ";
                cout << nbr;
                first = false;
            }

            cout<<"}"<<endl;

        }
    }

    bool cycleDetectionUndirectedBFS(int src, unordered_map<int,bool> &visited)
    {
        // three requirement
        queue<int> q;
        unordered_map<int,int> parent;

        // initial condition
        q.push(src);
        visited[src]=true;
        parent[src]=-1;

        while(!q.empty())
        {
            int frontNode=q.front();
            q.pop();

            for(auto nbr:adjacencyList[frontNode])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=frontNode;
                }

                // cycle detection case
                else if(visited[nbr]==true && nbr!=parent[frontNode])
                {
                    return true;
                }
            }
        }
        return false;
    
    }
};

int main()
{
    int n;
    cout<<"Enter the number of Nodes: ";
    cin>>n;

    int e;
    cout<<"Enter the number of Edges: ";
    cin>>e;

    Graph g;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjacencyList();

    bool ans=false;
    unordered_map<int,bool> visited;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans=g.cycleDetectionUndirectedBFS(i,visited);
            if(ans==true)
            {
                break;
            }
        }
    }
    cout << (ans ? "Cycle detected\n" : "No cycle\n");


}
