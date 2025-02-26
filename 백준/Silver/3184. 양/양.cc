#include <bits/stdc++.h>
using namespace std;

#define MAX 250

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int r, c, ts, tw;
char graph[MAX][MAX];
bool v[MAX][MAX];


void bfs(int a, int b)
{
  int s=0, w=0;
  
  queue<pair<int,int>> q;
  q.push(make_pair(a,b));
  v[a][b] = true;
  
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    if (graph[x][y] == 'o')
      s++;
    else if (graph[x][y] == 'v')
      w++;
    
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
  
  if (s > w)
    ts += s;
  else
    tw += w;
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
      cin >> graph[i][j];
      
      if (graph[i][j] == '#')
        v[i][j] = true;
    }
  }
  
  for (int i=0; i < r; i++)
  {
    for (int j=0; j < c; j++)
    {
      if (!v[i][j])
        bfs(i, j);
    }
  }
  
  cout << ts << " " << tw;
}