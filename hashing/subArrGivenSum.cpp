#include<bits/stdc++.h>
using namespace std;
bool givenSum(int arr[],int n,int sum)
{
    int preSum=arr[0];
    unordered_set <int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++)
    {
        preSum+=arr[i];
        if(preSum==sum) return true;
        if(s.find(preSum-sum)!=s.end())
            return true;
        s.insert(preSum);
    }
    return false;
}
int main()
{
    int arr[] = {5,3,2,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=55;
    cout<<givenSum(arr,n,sum);
    return 0;
}