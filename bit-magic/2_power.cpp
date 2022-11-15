#include<iostream>
using namespace std;
int main()
{
    int n=2,a=1,count=0;
    while(1)
    {
        if(n&a!=0)
        {
            count++;
            break;
        }
        else{
            a<<1;
        }
    }
    cout<<count;
    return 0;
}