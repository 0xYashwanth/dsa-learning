//gives index of x the element in the sorted array
//gives any one of the indexes if the element is repeated
#include<iostream>
using namespace std;
int binSearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
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
int main()
{
    return 0;
}