
#include <iostream>
using namespace std;
int large(int arr[],int size)
{
    int largst=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=largst)
        {
            largst=arr[i];
        }
    }
    return largst;
}
int main() {
    int arr[5]={1,2,113,4,90};
    cout<<large(arr,5);
    return 0;
}
