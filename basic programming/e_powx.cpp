#include<iostream>
using namespace std;

 int main()
{
    float val = 1.0,t;
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    //cin >> val;

    for(int i=1;i<=n;i++)
    {
        val =1+ val/i;
        
    }
    printf("%f",val);

return 0;
}