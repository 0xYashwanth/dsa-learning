#include<bits/stdc++.h>
using namespace std;
int leftMost(string str)
{
    bool visited[256];
    fill(visited,visited+256,false);
    int res=-1;
    for(int i=0;i<str.length();i++)
    {
        if(visited[str[i]])
        res=i;
        else
        visited[str[i]]=true;
    }
    return res;
}
int main()
{
    return 0;
}