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

      void cycleDetectiondirectedgraphBFS(int n, vector<int> &result)
      {
            queue<int> q;
            unordered_map<int,int> indegree;

            for(int src=0;src<n;src++)
            {
                for(auto nbr:adjlist[src])
                {
                    indegree[nbr]++;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
            while(!q.empty())
            {
                int frontnode=q.front();
                result.push_back(frontnode);
                q.pop();

                for(auto nbr:adjlist[frontnode])
                {
                    indegree[nbr]--;
                    if(indegree[nbr]==0)
                    {
                        q.push(nbr);
                    }
                }
            }
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

    
    vector<int> result;
    
    g.cycleDetectiondirectedgraphBFS(n,result);


    if(result.size()==n)
    {
        cout<<"cycle absent: ";
    }
    else{
        cout<<"cycle present: ";
    }
}