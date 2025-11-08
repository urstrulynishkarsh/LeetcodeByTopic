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

        bool checkCycleDirectedDFS(int src, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfschecker)
        {
            visited[src]=true;
            dfschecker[src]=true;

            for(auto nbr:adjlist[src])
            {
                if(!visited[nbr])
                {
                    bool ans=checkCycleDirectedDFS(nbr,visited,dfschecker);
                    if(ans==true)
                    {
                        return true;
                    }
                }
                else if(visited[nbr]==true && dfschecker[nbr]==true)
                {
                    return true;
                }
            }
            dfschecker[src]=false;
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
        g.addedge(u,v,1);
    }

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfschecker;
    bool ans=false;
    

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans=g.checkCycleDirectedDFS(i,visited,dfschecker);
            if(ans==true)
            {
                break;
            }
        }
    }

    cout<<(ans?"Cycle Present":"Cycle Absent\n");
}