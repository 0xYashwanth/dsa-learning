//For segregrating an array containing 3 types of elements
//sort an array of 1,0,2
//partition around a range
#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[l],arr[m]);
            m++;l++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
}
int main()
{
    return 0;
}