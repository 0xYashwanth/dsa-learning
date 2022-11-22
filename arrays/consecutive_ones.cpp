#include<iostream>
using namespace std;
int maxConsecOnes(int arr[],int n)
{
    int curr=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            curr=0;
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    return 0;
}