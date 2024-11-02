#include <bits/stdc++.h>
using namespace std;

int n, m;
int graph[501][501], dp[501][501];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int DFS(int y, int x)
{
  if (y == m && x == n)
    return 1;
  
  if (dp[y][x] == -1) {
    dp[y][x] = 0;

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if ( 0 < nx && nx <= n
          && 0 < ny && ny <= m
          && graph[y][x] > graph[ny][nx])
      {
        dp[y][x] += DFS(ny, nx);
      }
    }
  }

  return dp[y][x];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n;

  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
    {
      cin >> graph[i][j];
      dp[i][j] = -1;
    }

  cout << DFS(1, 1);
}