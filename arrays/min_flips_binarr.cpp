#include<iostream>
using namespace std;
void printGroups(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
                cout<<"From"<<i<<"to";
            else
                cout<<i-1<<endl;
        }
        if(arr[0]!=arr[n-1])
            cout<<n-1;
    }
}
int main()
{
    return 0;
}