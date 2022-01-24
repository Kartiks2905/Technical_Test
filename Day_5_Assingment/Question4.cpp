#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<char>> &grid, int i, int j)
{

    queue<pair<int, int>> q;
    q.push({i, j});
    grid[i][j] = '0';

    while (!q.empty())
    {

        auto point = q.front();
        q.pop();

        int x = point.first;
        int y = point.second;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 or nx >= grid.size() or ny < 0 or ny >= grid[nx].size() or grid[nx][ny] == '0')
                continue;
            q.push({nx, ny});
            grid[nx][ny] = '0';
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                count++;
                bfs(grid, i, j);
            }
        }
    }
    return count;
}