#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int size[N];
//disjoint set implemntation and kruskals algo

void make(int v)
{
    parent[v]=v;
    size[v]=1;
}

int find(int v)
{
    if(parent[v]==v)return v;
    //path compression
    return parent[v]=find(parent[v]);
}

void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        //union by rank
        if(size[a]<size[b])
            swap(a,b);
        parent[a]=parent[b];
        size[a]+=size[b];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>>edges;
    for(int i=0;i<m;++i)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());
    for(int i=1;i<=n;i++)
    {
        make(i);
    }
    int total_cost=0;
    for(auto &edge : edges)
    {
        int wt=edge.first;
        int u=edge.second.first;
        int v=edge.second.second;
        if(find(u)==find(v))
            continue;
        Union(u,v);
        total_cost+=wt;
        cout<<u<<"--"<<v<<endl;
    }
    cout<<total_cost<<endl;
    return 0;
}