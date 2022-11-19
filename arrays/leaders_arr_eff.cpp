#include <iostream>
using namespace std;
void leaders(int arr[], int n)
{
    int curr = arr[n - 1];
    cout << curr << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (curr < arr[i])
        {
            curr = arr[i];
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int arr[7] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    leaders(arr, n);
    return 0;
}