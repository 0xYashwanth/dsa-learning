#include<bits/stdc++.h>
using namespace std;
bool zeroSum(int arr[],int n)
{
    int preSum=arr[0];
    unordered_set <int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++)
    {
        preSum+=arr[i];
        if(s.find(preSum)!=s.end())
            return true;
        s.insert(preSum);
    }
    return false;
}
int main()
{
    int arr[] = {3,4,3,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<zeroSum(arr,n);
    return 0;
}