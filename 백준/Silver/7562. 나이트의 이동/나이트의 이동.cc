#include <bits/stdc++.h>
using namespace std;

int dx[8] = {2,2,1,1,-1,-1,-2,-2};
int dy[8] = {1,-1,2,-2,2,-2,1,-1};

#define MAX 300

int t, l, sx, sy, ex, ey, ans;
int g[MAX][MAX];
queue<pair<int,int>> q;


int bfs()
{
  int ret = -1;
  
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    if (x == ex && y == ey)
    {
      ret = g[x][y];
      break;
    }
    
    for (int i=0; i<8; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || l <= nx || l <= ny)
        continue;
      
      if (g[nx][ny] != 0)
        continue;
      
      q.push(make_pair(nx,ny));
      g[nx][ny] = g[x][y] + 1;
    }
  }
  
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  while (t--)
  {
    cin >> l;
    
    for (int i=0; i<l; i++)
      fill(g[i], g[i]+l, 0);
    
    while (!q.empty())
      q.pop();
    
    cin >> sx >> sy >> ex >> ey;
    
    q.push(make_pair(sx,sy));
    g[sx][sy] = 1;
    
    ans = bfs();
    
    cout << ans-1 << "\n";
  }
}