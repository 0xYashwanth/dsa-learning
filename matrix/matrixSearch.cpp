//searches in column wise and row wise sorted
#include<bits/stdc++.h>
using namespace std;
vector<int> MatrixSearch(vector<vector<int>> matrix,int target)
{
    int r=0;
    int c=matrix.size()-1;
    while (r<matrix.size()&&c>=0)
    {
        if(matrix[r][c]==target)
        return {r,c};
        else if(matrix[r][c]>target)
        c--;
        else
        r++;
    }
    return {-1,-1};
}
int main()
{
    vector<vector<int>> arr={
        {10,20,30,40},
        {15,25,35,45},
        {28,29,37,49},
        {33,34,38,50}
    };
    vector<int> ans=MatrixSearch(arr,37);
    for (vector<int>::iterator it = ans.begin() ; it != ans.end(); it++)
    cout << "\n" << *it;
    return 0;
}