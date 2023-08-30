#include<bits/stdc++.h>
using namespace std;
//detection of cycle in directed graph using dfs 
bool dfsRec(vector<int>adj[],int s,bool visited[],bool recSt[])
{
    visited[s]=true;
    recSt[s]=true;
    for(auto i:adj[s])
    {
        if(visited[i]==false && dfsRec(adj,i,visited,recSt))
        return true;

        else if(recSt[i]==true)
            return true;
    }
    recSt[s]=false;
    return false;
}
bool dfs(vector<int>adj[],int v)
{
    bool visited[v];
    bool recSt[v];
    for(int i=0;i<v;i++)
    {
        visited[v]=false;
        recSt[v]=false;
    }
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
            if(dfsRec(adj,i,visited,recSt)==true)
                return true;
    }
    return false;
}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);

	if(dfs(adj,V))
	    cout<<"Cycle found";
	else
	    cout<<"No cycle found";
    return 0;
}