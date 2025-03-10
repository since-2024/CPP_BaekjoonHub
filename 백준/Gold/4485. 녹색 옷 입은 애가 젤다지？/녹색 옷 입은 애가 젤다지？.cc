#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

#define MAX 126

int n, cnt=0, ans;
int g[MAX][MAX], v[MAX][MAX];
queue<pair<int,int>> q;


void bfs()
{
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i=0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || ny < 0 || n <= nx || n <= ny)
        continue;
      
      if (v[nx][ny] > v[x][y] + g[nx][ny])
      {
        v[nx][ny] = v[x][y] + g[nx][ny];
        q.push(make_pair(nx, ny));
      }
    }
  }

  ans = v[n-1][n-1];
}

void init_v()
{
  fill(v[0], v[n], 1e9);
  
  cnt++;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (true)
  {
    cin >> n;
    
    if (n == 0)
      break;
    
    init_v();
    
    for (int i=0; i < n; i++)
      for (int j=0; j < n; j++)
        cin >> g[i][j];
    
    q.push(make_pair(0,0));
    v[0][0] = g[0][0];
    bfs();
    
    cout << "Problem " << cnt << ": " << ans << "\n";
  }
}