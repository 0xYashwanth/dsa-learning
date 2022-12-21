#include<iostream>
using namespace std;
int searchRotArr(int arr[],int n,int x)
{
    int high=n-1,low=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[low]<arr[mid])
        {
            if(x>=arr[low]&&x<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else
        {
            if(x>arr[mid]&&x<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}
int main()
{
    return 0;
} 