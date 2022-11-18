#include<iostream>
using namespace std;
int remDup(int arr[],int n)
{
    int temp[n];
    int res=1;
    temp[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
    return res;
}
int main()
{
    int arr[5]={1,22,22,44,44};
    cout<<remDup(arr,5)<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}