#include<iostream>
using namespace std;
int binSearch(int arr[],int x,int low,int high)
{
    //int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            low=mid+1;
        else 
            high=mid-1;
    }
    return -1;
}
int unbSear(int arr[],int x)
{   
    int i=1;
    if(arr[0]==x)
        return 0;
    while (arr[i]<x)
        i=2*i;
    if(arr[i]==x)
        return i;
    return binSearch(arr,x,(i/2) + 1,i-1);
}
int main()
{
    return 0;
}