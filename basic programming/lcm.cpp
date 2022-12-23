#include <iostream>
using namespace std;

// LCM = m*n / gcd

int lcm(int m, int n)
{
    int prod = m * n;
    while (m % n != 0)
    {
        int nextm = n;
        int nextn = m % n;
        m = nextm;
        n = nextn;
    }
    return prod / n;
}
void main()
{
    cout <<lcm(5, 2) << endl;
}