#include<iostream>
using namespace std;
void mergeTwoSortArr(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {cout<<a[i]<<" ";i++;}
        else
        {cout<<b[j]<<" ";j++;}
    }
    while(i<m)
    {cout<<a[i]<<" ";i++;}
    while(j<n)
    {cout<<b[j]<<" ";j++;}
}
int main()
{
    return 0;
}