#include<iostream>
#include<vector>
using namespace std;

class Graph{
    public:
        int n;
        vector<vector<int> > adjacencyMatrix;

        Graph(int n)
        {
            this->n=n;
            adjacencyMatrix.resize(n,vector<int>(n,0));
        }

        void addEdge(int u, int v, bool direction)
        {
            if(direction==0)
            {
                adjacencyMatrix[u][v]=1;
                adjacencyMatrix[v][u]=1;
            }
            else{
                adjacencyMatrix[u][v]=1;
            }
        }

        void printAdjacencyMatrix()
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<adjacencyMatrix[i][j]<<" ";
                }
                cout<<endl;
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

    Graph g(n);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,1);
    }

    g.printAdjacencyMatrix();


    
}