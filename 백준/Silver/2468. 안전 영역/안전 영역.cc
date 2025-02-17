#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, mc=1;
int graph[MAX][MAX];
bool v[MAX][MAX];
queue<pair<int,int>> q;


void bfs(int k)
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
      
      if (nx < 0 || ny < 0 || n <= nx || n <= ny || v[nx][ny])
        continue;
      
      if (k <= graph[nx][ny])
        q.push(make_pair(nx,ny));
      
      v[nx][ny] = true;
    }
  }
}

void reset()
{
  for (int i=0; i < n; i++)
    for (int j=0; j < n; j++)
      v[i][j] = false;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
    
  for (int i=0; i < n; i++)
    for (int j=0; j < n; j++)
      cin >> graph[i][j];
  
  for (int k=0; k <= MAX; k++)
  {
    int cnt = 0;

    for (int i=0; i < n; i++)
    {
      for (int j=0; j < n; j++)
      {
        if (!v[i][j] && k <= graph[i][j])
        {
          q.push(make_pair(i, j));
          v[i][j] = true;
          
          bfs(k);
          
          cnt++;
        }
      }
    }
    
    if (cnt == 0)
      break;
    else if (mc < cnt)
      mc = cnt;
    
    reset();
  }
  
  cout << mc;
}