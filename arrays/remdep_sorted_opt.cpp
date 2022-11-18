#include <iostream>
using namespace std;
int remDup(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[5] = {1, 22, 22, 44, 44};
    for (int i = 0; i < remDup(arr, 5); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}