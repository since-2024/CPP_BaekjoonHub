#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 100

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, cnt1, cnt2;
char graph[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int,int>> q;


void bfs(int a, int b)
{
  char target = graph[a][b];
  q.push(make_pair(a,b));
  visited[a][b] = true;

  while(!q.empty())
	{
    int x = q.front().fi;
    int y = q.front().se;
    q.pop();

    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || n <= nx || n <= ny || visited[nx][ny])
        continue;
      
      if (graph[nx][ny] == target)
      {
        q.push(make_pair(nx,ny));
        visited[nx][ny] = true;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  for (int i=0; i < n; i++)
    for (int j=0; j < n; j++)
      cin >> graph[i][j];
  
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < n; j++)
    {
      if (!visited[i][j])
      {
        bfs(i,j);
        cnt1++;
      }
    }
  }
  
  memset(visited, false, sizeof(visited));
  
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < n; j++)
    {
      if (graph[i][j] == 'R')
        graph[i][j] = 'G';
    }
  }

  for (int i=0; i < n; i++)
  {
    for (int j=0; j < n; j++)
    {
      if (!visited[i][j])
      {
        bfs(i,j);
        cnt2++;
      }
    }
  }

  cout << cnt1 << " " << cnt2;
}