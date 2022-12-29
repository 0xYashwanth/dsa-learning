// prints the intersection of two arrays . Duplicates are ignored
#include <iostream>
using namespace std;
void intersectArr(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i];
            i++;
            j++;
        }
    }
}
int main()
{
    return 0;
}