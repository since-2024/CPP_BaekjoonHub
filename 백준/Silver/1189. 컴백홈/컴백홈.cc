#include <bits/stdc++.h>
using namespace std;

#define MAX 250

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int r, c, k, ans;
char g[MAX][MAX];
int v[MAX][MAX];


void dfs(int x, int y)
{
  if (x == 0 && y == c-1 && v[x][y] == k)
  {
    ans++;
  }
  else
  {
    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || r <= nx || c <= ny || v[nx][ny] != 0)
        continue;

      if (v[nx][ny] > k)
        break;
      
      v[nx][ny] = v[x][y] + 1;

      dfs(nx,ny);

      v[nx][ny] = 0;
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> r >> c >> k;
  
  for (int i=0; i < r; i++)
  {
    for (int j=0; j < c; j++)
    {
      cin >> g[i][j];

      if (g[i][j] == 'T')
        v[i][j] = 1;
    }
  }

  v[r-1][0] = 1;
  dfs(r-1, 0);

  cout << ans;
}