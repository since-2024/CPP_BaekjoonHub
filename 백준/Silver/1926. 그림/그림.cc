#include <bits/stdc++.h>
using namespace std;

#define MAX 500

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int n, m, cnt, max_width;
int graph[MAX][MAX];


void bfs(int a, int b)
{
  int w = 1;
  queue<pair<int,int>> q;

  q.push(make_pair(a, b));
  
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if ( nx < 0 || n <= nx || ny < 0 || m <= ny )
        continue;
      
      if (graph[nx][ny] == 1)
      {
        graph[nx][ny] = 0;
        w++;

        q.push(make_pair(nx, ny));
      }
    }
  }

  max_width = max(w, max_width);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;

  for (int i=0; i < n; i++)
    for (int j=0; j < m; j++)
      cin >> graph[i][j];

  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (graph[i][j] == 1)
      {
        graph[i][j] = 0;
        bfs(i, j);
        cnt++;
      }
    }
  }
  
  cout << cnt << "\n" << max_width;
}