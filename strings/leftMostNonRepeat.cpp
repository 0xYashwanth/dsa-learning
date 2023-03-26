#include<bits/stdc++.h>
using namespace std;
int leftMostNonRepeat(string &str)
{
    int fInd[256];
    fill(fInd,fInd+256,-1);
    for(int i=0;i<str.length();i++)
    {
        if(fInd[str[i]]==-1)
            fInd[str[i]]=i;
        else
            fInd[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<256;i++)
    {
        if(fInd[i]>0) res=min(res,fInd[i]);
    }
    return (res==INT_MAX)?-1:res;
}
int main()
{
    return 0;
}