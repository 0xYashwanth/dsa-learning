//using hoare partition function
#include<iostream>
using namespace std;
void segPosNeg(int arr[],int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j)return;
        swap(arr[i],arr[j]);
    }
}
int main()
{
    int arr[5]={-1,10,5,-9,-10};
    segPosNeg(arr,5);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}