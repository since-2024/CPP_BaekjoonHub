#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int n, m, k;
bool g[MAX][MAX];
queue<pair<int,int>> q;
vector<int> ans;


void bfs()
{
  int t = 1;

  while(!q.empty())
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
      
      if (!g[nx][ny])
      {
        q.push(make_pair(nx,ny));
        g[nx][ny] = true;
        t++;
      }
    }
  }

  ans.push_back(t);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> k;
  
  
  while (k--)
  {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    
    for (int i=y1; i < y2; i++)
      for (int j=x1; j < x2; j++)
        g[i][j] = true;
  }
  
  for (int i=0; i < n; i++)
  {
    for (int j=0; j < m; j++)
    {
      if (!g[i][j])
      {
        q.push(make_pair(i,j));
        g[i][j] = true;
        bfs();
      }
    }
  }

  sort(ans.begin(), ans.end());

  cout << ans.size() << "\n";

  for (auto c : ans)
    cout << c << " ";
}