#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &graph, vector<vector<int>> &vis, int r, int c)
{
    vis[r][c] = 1;
    int m = graph.size();
    int n = graph[0].size();

    for (int i = r - 1; i <= r + 1; i++)
        for (int j = c - 1; j <= c + 1; j++)
            if (i >= 0 && i < m && j >= 0 && j < n)
                if (vis[i][j] == 0 && graph[i][j] == '1')
                {
                    vis[i][j] = 1;
                    dfs(graph, vis, i, j);
                }
}
int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int cnt = 0;
    int r = grid.size();
    int c = grid[0].size();
    vector<vector<int>> vis(r, vector<int>(c, 0));

    for (int row = 0; row < r; row++)
        for (int col = 0; col < c; col++)
            if (vis[row][col] == 0 && grid[row][col] == '1')
            {
                cnt++;
                dfs(grid, vis, row, col);
            }

    return cnt;
}
int main()
{
    return 0;
}