#include<bits/stdc++.h>
using namespace std;
//to reverse whole string first reverse the individual words and then reverse the whole new string
void reverse(char str[],int low ,int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void revString(char str[],int n)
{
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);//for last word
    reverse(str,0,n-1);
}
int main()
{
    return 0;
}