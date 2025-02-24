#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, m, k, ans, a, b, t;
int graph[MAX][MAX];
queue<pair<int,int>> q;


int bfs()
{
  int ret = 1;
  
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || n <= nx || m <= ny)
        continue;
      
      if (graph[nx][ny] == 1)
      {
        q.push(make_pair(nx,ny));
        graph[nx][ny] = 0;
        ret++;
      }
    }
  }
  
  return ret;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> k;
  
  for (int i=0; i < k; i++)
  {
    cin >> a >> b;
    
    graph[a-1][b-1] = 1;
  }
  
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (graph[i][j] == 1)
      {
        q.push(make_pair(i,j));
        graph[i][j] = 0;
        
        t = bfs();
        
        if (ans < t)
          ans = t;
      }
    }
  }
  
  cout << ans;
}