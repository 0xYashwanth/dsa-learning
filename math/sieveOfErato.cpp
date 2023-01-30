//declare an boolean array of all trues
//make the multiples of primes as false 
#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j++)
                isPrime[j]=false;
        }
    }
    for(int i=2;i<n;i++)
    {
        if(isPrime[i])
            cout<<i<<" ";
    }
}
int main()
{
    sieve(100);
    return 0;
}