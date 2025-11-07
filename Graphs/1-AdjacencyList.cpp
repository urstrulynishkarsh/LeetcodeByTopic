#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;


class Graph{
    public:
    unordered_map<int,list<int> > adjlist;

    void addedge(int u, int v, bool direction)
    {
        // direction=0 then it is undirected graph
        // direction=1 then it is directed graph

        if(direction==0)
        {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        else{
            adjlist[u].push_back(v);
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
                cout<<*it;
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
    Graph g;
    g.addedge(0,1,1);
    g.addedge(0,3,1);
    g.addedge(1,2,1);
    g.addedge(1,3,1);
    g.addedge(2,4,1);

    int n=5;

    g.printAdjacencyList(n);
}