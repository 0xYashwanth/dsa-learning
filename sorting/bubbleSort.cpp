#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    bool swapped=false;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)
        break;
    }
    
}
int main()
{
    return 0;
}