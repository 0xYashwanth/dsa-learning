#include<iostream>
using namespace std;
void selecSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
                min_ind=j;
        }
        swap(arr[i],arr[min_ind]);
    }
}
int main()
{
    return 0;
}