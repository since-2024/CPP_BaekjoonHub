#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 1000

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, m, ans;
int graph[MAX][MAX];
bool proc;
queue<pair<int,int>> q, nq;


void checking()
{
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (graph[i][j] == 0)
      {
        return;
      }
    }
  }

  proc = true;
  return;
}

void bfs()
{
  while(!q.empty())
	{
    int x = q.front().fi;
    int y = q.front().se;
    q.pop();

    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || n <= nx || m <= ny)
        continue;
      
      if (graph[nx][ny] == 0)
      {
        nq.push(make_pair(nx,ny));
        graph[nx][ny] = -1;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> m >> n;

  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      cin >> graph[i][j];

      if (graph[i][j] == 1)
      {
        q.push(make_pair(i,j));
        graph[i][j] = -1;
      }
    }
  }
  
  while (!proc)
  {
    checking();

    if (!proc)
    {
      if (q.empty())
      {
        ans = -1;
        proc = true;
        break;
      }

      bfs();

      q = nq;
      
      while(!nq.empty())
        nq.pop();
      
      ans++;
    }
  }

  cout << ans;
}