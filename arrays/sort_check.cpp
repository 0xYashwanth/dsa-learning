#include <iostream>
using namespace std;
bool check(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i+1]<arr[i])
        return false;
    }
    return true;
}
int main() {
    int arr[5]={1,2,4,4,5};
    cout<<check(arr,5);
    return 0;
}