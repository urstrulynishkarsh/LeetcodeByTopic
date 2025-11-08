#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int> > adjlist;

        void addedge(int u, int v, bool direction)
        {
            adjlist[u].push_back(v);
            if(direction==0)
            {
                adjlist[v].push_back(u);
            }
        }

        void printAdjlist()
        {
            for(auto i:adjlist)
            {
                cout<<i.first<<": {";
                auto &neighbors=i.second;
                bool first=true;
                for(auto nbr:neighbors)
                {
                    if(!first)
                    {
                        cout<<",";
                    }
                    cout<<nbr;
                    first=false;
                }
                cout<<"}"<<endl;
            }
        }

        void TopologicalSort(int src, unordered_map<int,bool> &visited, vector<int> &result)
        {
            visited[src]=true;
            for(auto nbr:adjlist[src])
            {
                if(!visited[nbr])
                {
                    TopologicalSort(nbr,visited,result);
                }
            }
            result.push_back(src);
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
        g.addedge(u,v,1);
    }

    unordered_map<int,bool> visited;
    vector<int> result;

    for(auto &p:g.adjlist)
    {
        int node=p.first;
        if(!visited[node])
        {
            g.TopologicalSort(node,visited,result);
        }
    }
    reverse(result.begin(),result.end());
    bool first=true;
    for(auto val:result)
    {
        if(!first)
        {
            cout<<",";
        }
        cout<<val;
        first=false;
    }
}