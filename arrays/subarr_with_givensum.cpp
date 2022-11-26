#include<iostream>
using namespace std;
bool isSubSum(int arr[],int n,int sum)
{
    int s=0, curr=0;
    for(int e=0;e<n;e++)
    {
        curr+=arr[e];
        while(sum<curr)
        {
            curr-=arr[s];
            s++;
        }
        if(sum==curr)
            return true;
    }
    return false;
}
int main()
{
    int arr[4]={4,8,12,5};
    int n=4,sum=17;
    cout<<isSubSum(arr,n,sum);
    return 0;
}