#include<bits/stdc++.h>
using namespace std;
bool isSubSeq(string s1,string s2,int m,int n)
{
    int j=0;
    if(m<n) return false;
    for(int i=0;i<m&&j<n;i++)
    {
        if(s1[i]==s2[j]) j++;
    }
    return (j==n);
}
int main()
{
    return 0;
}

  