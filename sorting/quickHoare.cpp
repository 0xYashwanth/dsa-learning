#include<iostream>
using namespace std;
int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>j) return j;
        swap(arr[i],arr[j]);   
    }
}
void quick(int arr[],int low ,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quick(arr,low,p-1);
        quick(arr,p+1,high);
    }
}
int main()
{
    return 0;
}