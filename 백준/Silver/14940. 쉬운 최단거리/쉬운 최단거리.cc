#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int n, m, tx, ty;
int graph[MAX][MAX];
int visited[MAX][MAX];


void bfs(int a, int b)
{
  queue<pair<int,int>> q;

  q.push(make_pair(a, b));
  visited[a][b] = 1;
  
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
      
      if (visited[nx][ny] == 0 && graph[nx][ny] != 0)
      {
        visited[nx][ny] = visited[x][y] + 1;
        q.push(make_pair(nx, ny));
      }
    }
  }
}

void print_visited()
{
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (graph[i][j] == 0)
        cout << 0 << " ";
      else
        cout << visited[i][j] - 1 << " ";
    }
    cout << "\n";
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
      cin >> graph[i][j];

      if (graph[i][j] == 2)
      {
        tx = i;
        ty = j;
      }
    }
  }

  bfs(tx, ty);

  print_visited();
}