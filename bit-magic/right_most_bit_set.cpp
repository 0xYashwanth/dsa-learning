#include <iostream>
using namespace std;
int main()
{

    int m = 8, n = 8;
    if (m == n)
    {
        cout << "-1";
    }
    if (m != n)
    {
        int b = (m & (~n));
        int a = 1, pos = 1;
        while (1)
        {
            if (b & a)
            {
                cout << pos;
                break;
            }
            else
            {
                a = a << 1;
                pos++;
            }
        }
    }
}