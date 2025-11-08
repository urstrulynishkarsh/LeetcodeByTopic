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

        bool checkCycleUndirectedDFS(int src, unordered_map<int,bool> &visited, int &parent)
        {
            visited[src]=true;

            for(auto node:adjlist[src])
            {
                if(!visited[node])
                {
                    bool ans=checkCycleUndirectedDFS(node,visited,src);
                    if(ans==true)
                    {
                        return true;
                    }
                }
                // check cycle
                else if(visited[node]==true && node!=parent)
                {
                    return true;
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
        g.addedge(u,v,0);
    }

    unordered_map<int,bool> visited;
    bool ans=false;
    int parent=-1;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans=g.checkCycleUndirectedDFS(i,visited,parent);
            if(ans==true)
            {
                break;
            }
        }
    }

    cout<<(ans?"Cycle Present":"Cycle Absent\n");


}