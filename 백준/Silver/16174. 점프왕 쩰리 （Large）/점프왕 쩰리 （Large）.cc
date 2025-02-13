#include <bits/stdc++.h>
using namespace std;

#define MAX 64

int dx[2] = {1,0};
int dy[2] = {0,1};

int n;
int graph[MAX][MAX];
bool v[MAX][MAX];
queue<pair<int,int>> q;


void bfs()
{
  q.push(make_pair(0,0));
  
  while (!q.empty() && graph[n-1][n-1] < 0)
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    
    for (int i=0; i<2; i++)
    {
      int nx = x + dx[i] * graph[x][y];
      int ny = y + dy[i] * graph[x][y];
      
      if (n <= nx || n <= ny || v[nx][ny])
        continue;
      
      q.push(make_pair(nx,ny));
      v[nx][ny] = true;
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
  
  bfs();
  
  if (v[n-1][n-1])
    cout << "HaruHaru";
  else
    cout << "Hing";
}