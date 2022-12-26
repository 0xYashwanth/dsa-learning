#include<iostream>
using namespace std;
int countSet(int n)
{
    int count=0;
    if(n==0)
    return 0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    return 0;
}