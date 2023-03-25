#include<bits/stdc++.h>
using namespace std;
//check n==0 condition first (smaller string)
bool isSubSeqRec(string s1,string s2,int m,int  n)
{
    if(n==0)
    return true;
    if(m==0)
    return false;
    if(s1[m-1]==s2[n-1]) return isSubSeqRec(s1,s2,m-1,n-1);
    else isSubSeqRec(s1,s2,m-1,n); 
}
int main()
{
    return 0;
}