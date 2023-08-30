#include<bits/stdc++.h>
using namespace std;
//Topo sort using BFS idea
void TopoSort(vector<int>adj[],int indegree[],int V)
{
    queue<int>q;
    for(int i=0;i<V;i++)
        if(indegree[i]==0)
                q.push(i);

    while (!q.empty())
    {
        int n=q.front();
        q.pop();
        cout<<n<<" ";

        for(auto u:adj[n])
            if(--indegree[u]==0)
                q.push(u);
    }
}

void addEdge(vector<int> adj[],int indegree[], int u, int v)
{
    adj[u].push_back(v);
    indegree[v]++;
}
int main()
{
    int V=5;
	vector<int> adj[V];
    int indegree[V];
    for(int i=0;i<V;i++)
        indegree[i]=0;
    
	addEdge(adj,indegree,0, 2); 
    addEdge(adj,indegree,0, 3); 
    addEdge(adj,indegree,1, 3); 
    addEdge(adj,indegree,1, 4); 
    addEdge(adj,indegree,2, 3);  
    
    cout << "Topological Sort\n"; 
    TopoSort(adj,indegree,V);
    return 0;
}