#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[5]={1,2,0,0,5};
    moveZeroes(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}