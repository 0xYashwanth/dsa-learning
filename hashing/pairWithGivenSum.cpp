#include<bits/stdc++.h>
using namespace std;
bool isPair(int arr[],int n,int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            return true;
        else
            s.insert(arr[i]);
    }
    return false;
}
int main()
{
    int arr[5]={8,3,4,2,5};
    cout<<isPair(arr,5,13);
    return 0;
}