#include<bits/stdc++.h>
using namespace std;
bool isPal(string &str)
{
    int begin=0;
    int end=str.length()-1;
    while(begin<end)
    {
        if(str[end]!=str[begin]) return false;
        begin++;
        end--;
    }
    return true;
}
int main()
{
    return 0;
}