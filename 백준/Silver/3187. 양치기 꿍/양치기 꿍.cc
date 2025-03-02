#include <bits/stdc++.h>
using namespace std;

#define MAX 250

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int r, c, w, s;
char g[MAX][MAX];
bool v[MAX][MAX];


void bfs(int a, int b)
{
  int tw = 0, ts = 0;
  queue<pair<int,int>> q;
  q.push(make_pair(a,b));
  v[a][b] = true;

  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    if (g[x][y] == 'v')
      tw++;
    else if (g[x][y] == 'k')
      ts++;

    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || r <= nx || c <= ny || v[nx][ny])
        continue;
      
      q.push(make_pair(nx,ny));
      v[nx][ny] = true;
    }
  }

  if (ts > tw)
    s += ts;
  else
    w += tw;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> r >> c;
  
  for (int i=0; i < r; i++)
  {
    for (int j=0; j < c; j++)
    {
      cin >> g[i][j];

      if (g[i][j] == '#')
        v[i][j] = true;
    }
  }

  for (int i=0; i < r; i++)
    for (int j=0; j < c; j++)
      if (!v[i][j])
        bfs(i,j);

  cout << s << " " << w;
}