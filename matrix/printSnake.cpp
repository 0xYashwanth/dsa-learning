#include<bits/stdc++.h>
using namespace std;
const int r=3;
const int c=3;
void printSnake(int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int k=c-1;k>=0;k--)
            {
                cout<<arr[i][k]<<" ";
            }
        }
    }
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printSnake(arr);
    return 0;
}