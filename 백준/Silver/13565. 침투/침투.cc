#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

#define MAX 1000

int n, m;
bool ans;
char g[MAX][MAX];
bool v[MAX][MAX];
queue<pair<int,int>> q;

void bfs()
{
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
      
      if (g[nx][ny] == '1' || v[nx][ny])
        continue;
      
      v[nx][ny] = true;
      q.push(make_pair(nx,ny));
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      cin >> g[i][j];
  
  for (int j=0; j<m; j++)
  {
    if (g[0][j] == '0' && !v[0][j])
    {
      q.push(make_pair(0,j));
      v[0][j] = true;

      bfs();
    }
  }
  
  for (int j=0; j<m; j++)
    if (v[n-1][j])
      ans = true;
  
  if (ans)
    cout << "YES";
  else
    cout << "NO";
}