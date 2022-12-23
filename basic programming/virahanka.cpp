#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, n = 10;
    int a = 0;
    int b = 1;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
        cout << 0 <<"\n";
        cout << 1 <<"\n";
        for (i = 1; i <= n; i++)
        {

            int c = a + b;
            cout << c <<"\n";
            a = b;
            b = c;
        }
}