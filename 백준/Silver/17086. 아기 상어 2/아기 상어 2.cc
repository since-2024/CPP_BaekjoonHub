#include <bits/stdc++.h>
using namespace std;

#define MAX 50

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int dx_e[8] = {1,1,1,-1,-1,-1,0,0};
int dy_e[8] = {1,0,-1,1,0,-1,1,-1};

int n, m, ans;
int graph[MAX][MAX];
bool v[MAX][MAX];
queue<pair<int,int>> q;


void bfs()
{
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i=0; i<8; i++)
    {
      int nx = x + dx_e[i];
      int ny = y + dy_e[i];

      if (nx < 0 || ny < 0 || n <= nx || m <= ny || v[nx][ny])
        continue;

      q.push(make_pair(nx,ny));
      graph[nx][ny] = graph[x][y] + 1;
      v[nx][ny] = true;
    }
  }
}

int check()
{
  int ret = 0;

  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (graph[i][j] > ret)
        ret = graph[i][j];
    }
  }

  return ret;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      cin >> graph[i][j];

      if (graph[i][j] == 1)
      {
        q.push(make_pair(i,j));
        v[i][j] = 1;
      }
    }
  }

  bfs();

  ans = check() - 1;

  cout << ans;
}