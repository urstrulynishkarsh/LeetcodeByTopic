
#include<iostream>
#include<list>
#include<unordered_map>

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

    void printAdjacencyList(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<i<<": ";
            cout<<"{";
            auto it=adjlist[i].begin();
            while(it!=adjlist[i].end())
            {
                cout<<"("<<it->first<<","<<it->second<<")";
                it++;
                if(it!=adjlist[i].end())
                {
                    cout<<",";
                }
            }
            cout<<"}"<<endl;
        }
    }
};
int main()
{
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

    g.printAdjacencyList(n);
}