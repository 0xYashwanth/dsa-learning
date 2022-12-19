#include<iostream>
using namespace std;
int binSearch(int arr[],int low,int high,int n,int x)
{
    if(low>high)
        return -1;
    int mid=(high+low)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]<x)
        return binSearch(arr,mid+1,high,x);
    else
        return binSearch(arr,low,mid-1,x);
    
}
int main()
{
    return 0;
}