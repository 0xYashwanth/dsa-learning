#include <iostream>
using namespace std;
void getFirstSetBit(unsigned int n)
{
    // Your code here
    int a = 1;
    int pos=1;
    if (n == 0)
    {
        cout<<"No bit set";
    }
    else
    {
        while (1)
        {
            if (n & a)
            {
                cout<< pos;
                break;
            }
            else
                a = a << 1;
                
                pos++;
        }
    }
}
int main()
{
    getFirstSetBit(6636);
}
