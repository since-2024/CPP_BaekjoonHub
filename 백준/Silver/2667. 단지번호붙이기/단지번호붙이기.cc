#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 26

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int n;
char c;
int graph[MAX][MAX];
vector<int> ans;


int bfs(int x, int y)
{
  int cnt = 1;
  queue<pair<int,int>> q;
  q.push(make_pair(x, y));
  graph[x][y] = 0;

  while (!q.empty())
  {
    int x = q.front().fi;
    int y = q.front().se;
    q.pop();

    for (int i=0; i<4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 1 || n < nx || ny < 1 || n < ny)
        continue;
      else if (graph[nx][ny] == 1)
      {
        graph[nx][ny] = 0;
        q.push(make_pair(nx, ny));
        cnt++;
      }
    }
  }
  
  return cnt;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i=1; i <= n; i++)
  {
    for (int j=1; j <= n; j++)
    {
      cin >> c;
      graph[i][j] = c - '0';
    }
  }
  
  for (int i=1; i <= n; i++)
  {
    for (int j=1; j <= n; j++)
    {
      if (graph[i][j] == 1)
      {
        int k = bfs(i, j);
        ans.push_back(k);
      }
    }
  }

  sort(ans.begin(), ans.end());
  
  cout << ans.size() << "\n";
  for (auto a : ans)
    cout << a << "\n";
}