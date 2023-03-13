#include<bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int n,int arr2[],int m)
{
    unordered_set <int> s(arr1,arr1+n);
    for(int i=0;i<m;i++)
    {
        if((s.find(arr1[i]))!=s.end())
        {
            cout<<arr1[i]<<endl;
        }
    }
} 
int main()
{
    return 0;
}