//gives the length of the subarray which has max alternative even odd digits
//using kadanes algorithm
#include <iostream>
using namespace std;
int maxEvenOdd(int arr[], int n)
{
    int res = 1;
    int cur = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            cur++;
            res = max(res, cur);
        }
        else
            cur = 1;
    }
    return res;
}
int main()
{
    int arr[] = {5, 10, 20, 6, 3, 8}, n = 6;

    cout << maxEvenOdd(arr, n);
    return 0;
}