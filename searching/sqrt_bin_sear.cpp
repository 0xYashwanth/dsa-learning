//returns the floor of the square root of the number 
#include<iostream> 
using namespace std;
int sqrtFloor(int x)
{
    int high=n,low=0,ans=-1; 
    while(low<=high)
    {
        int mid=(high+low)/2;
        int msq=mid*mid;
        if(msq==x)
            return msq;
        else if (msq>x)
        {
            high=mid-1;
        }
        else 
        {
            low = mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{   
    cout<<sqrtFloor(100);
    return 0;
}