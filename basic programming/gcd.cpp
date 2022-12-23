#include <iostream>
using namespace std;

int main()
{
    int m, n, nextm, nextn;
    cout << "Enter Teh two numbers";
    cin >> m >> n;

    while (m % n != 0)
    {
        nextm = n;
        nextn = m % n;
        m = nextm;
        n = nextn;
    }
    cout << n << endl;
}
