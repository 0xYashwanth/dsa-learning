#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }
    for (auto a : um)
    {
        cout << a.first << " : " << a.second << endl;
    }
}
void countFreqOrder(int arr[], int n)
{
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (um[arr[i]] != -1)
        {
            cout << arr[i] << " : " << um[arr[i]] << endl;
            um[arr[i]] = -1;
        }
    }
}
int main()
{
    int arr[8] = {1, 2, 1, 1, 3, 3, 7, 7};
    countFreq(arr, 8);
    countFreqOrder(arr,8);
    return 0;
}