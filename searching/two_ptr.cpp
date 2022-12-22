// searching a pair of given sum using two pointer method
// returns true if the pair is present or else false
#include <iostream>
using namespace std;
bool isPair(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = (arr[i] + arr[j]);
        if (sum == x)
            return true;
        else if (sum > x)
            j--;
        else
            i++;
    }
    return false;
}
int main()
{
    return 0;
}