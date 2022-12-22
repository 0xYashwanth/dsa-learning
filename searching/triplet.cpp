//finds a triplet with given sum
//using pair sum as subroutine
bool isPair(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = (arr[i] + arr[j]);
        if (sum == x)
            return true;
        else if (sum > x)
            j--;
        else
            i++;
    }
    return false;
}
bool triplet(int arr[],int n,int sum)
{
    for(int j=0;i<n-2;j++)
    {
        if(isPair(arr,n-j,sum-arr[j]))
            return true;
    }
    return false;
}
#include<iostream>
using namespace std;
int main()
{
    return 0;
}