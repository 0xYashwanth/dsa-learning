#include<iostream>
using namespace std;
int main()
{
    int a,k=3,n=30;
    a = 1<<k;
    int b = n & a;
    cout<<b<<endl;
    if((n&a)!=0)
    {    
        cout<< 1;
    }
    else
    {
        cout<< 0;
    }
}