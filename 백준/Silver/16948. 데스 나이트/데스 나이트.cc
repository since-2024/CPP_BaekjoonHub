#include <bits/stdc++.h>
using namespace std;

#define MAX 200

int dx[6] = {-2,-2,0,0,2,2};
int dy[6] = {1,-1,2,-2,1,-1};

int n, sx, sy, ex, ey, ans;
int g[MAX][MAX];
queue<pair<int,int>> q;

int bfs()
{
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    if (g[ex][ey] != 0)
      return g[ex][ey] - 1;
    
    for (int i=0; i < 6; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || n <= nx || n <= ny)
        continue;
      
      if (g[nx][ny] != 0)
        continue;
      
      q.push(make_pair(nx,ny));
      g[nx][ny] = g[x][y] + 1;
    }
  }
  
  return -1;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  cin >> sx >> sy >> ex >> ey;
  
  q.push(make_pair(sx,sy));
  g[sx][sy] = 1;
  
  ans = bfs();
  
  cout << ans;
}