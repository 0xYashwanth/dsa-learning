#include<bits/stdc++.h>
using namespace std;
int leftMost(string str)
{
    int count[256]={0};
    for(int i=0;i<str.length();i++)
        count[str[i]]++;
    for(int i=0;i<str.length();i++)
        if(count[str[i]]>1)
            return i;
    return -1;
}
int main()
{
    return 0;
}