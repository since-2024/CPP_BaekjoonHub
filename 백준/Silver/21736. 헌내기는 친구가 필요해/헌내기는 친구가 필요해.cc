#include <bits/stdc++.h>
using namespace std;

#define MAX 600

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, m, ans;
char graph[MAX][MAX];
bool v[MAX][MAX];
queue<pair<int,int>> q;


int bfs()
{
  int ret = 0;
  
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    for (int i=0; i<4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || n <= nx || m <= ny)
        continue;
      
      if (v[nx][ny] || graph[nx][ny] == 'X')
        continue;
      
      if (graph[nx][ny] == 'P')
        ret++;
      
      q.push(make_pair(nx,ny));
      v[nx][ny] = true;
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
      
      if (graph[i][j] == 'I')
      {
        q.push(make_pair(i,j));
        v[i][j] = true;
      }
    }
  }
  
  ans = bfs();
  
  if (ans > 0)
    cout << ans;
  else
    cout << "TT";
}