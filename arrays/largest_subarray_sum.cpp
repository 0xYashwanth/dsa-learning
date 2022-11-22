//gives the largest contiguous sub array sum
#include<iostream>
using namespace std;
int maxSub(int arr[],int n)
{
    int maxEnding=arr[0],res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main()
{
    int arr[7]={-5,1,-2,3,-1,2,-2};
    cout<<maxSub(arr,7);
    return 0;
}