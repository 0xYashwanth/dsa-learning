#include<bits/stdc++.h>
using namespace std;
int leftMost(string str)
{
    int findIndex[256]={0};
    fill(findIndex,findIndex+256,-1);
    int res=INFINITY;
    for(int i=0;i<str.length();i++)
    {
        int f1=findIndex[str[i]];
        if(f1==-1)
        findIndex[str[i]]++;
        else
        res=min(res,f1);
    }
    return (res==INFINITY)?-1:res;

}
int main()
{
    return 0;
}