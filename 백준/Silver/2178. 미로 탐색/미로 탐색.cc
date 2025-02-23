#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, m, ans;
char c;
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

    for (int i=0; i<4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || n <= nx || m <= ny || v[nx][ny])
        continue;

      v[nx][ny] = true;

      if (graph[nx][ny] == 1)
      {
        q.push(make_pair(nx,ny));
        graph[nx][ny] = graph[x][y] + 1;
      }
    }
  }
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
      cin >> c;
      graph[i][j] = c - '0';
    }
  }
  
  q.push(make_pair(0,0));
  v[0][0] = true;

  bfs();

  cout << graph[n-1][m-1];
}