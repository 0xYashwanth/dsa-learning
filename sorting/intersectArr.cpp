// prints the intersection of two arrays . Duplicates are ignored
#include <iostream>
using namespace std;
void intersectArr(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (ai > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
            (a[i] == b[j])
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