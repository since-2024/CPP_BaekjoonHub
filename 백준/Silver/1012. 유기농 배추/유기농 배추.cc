#include <bits/stdc++.h>
using namespace std;

#define MAX 50

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int t, n, m, k, x, y;
int graph[MAX][MAX];


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;

  while (t--)
  {
    cin >> n >> m >> k;

    int ans = 0;
    fill(graph[0], graph[m], 0);

    while (k--)
    {
      cin >> x >> y;

      graph[y][x] = 1;
    }

    queue<pair<int, int>> q;
    
    for (int i=0; i < m; i++)
    {
      for (int j=0; j < n; j++)
      {
        if (graph[i][j] == 1)
        {
          graph[i][j] = 0;
          q.push(make_pair(i,j));

          while (!q.empty())
          {
            x = q.front().first;
            y = q.front().second;
            q.pop();

            for (int idx = 0; idx < 4; idx++)
            {
              int nx = x + dx[idx];
              int ny = y + dy[idx];

              if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

              if (graph[nx][ny] == 1) {
                q.push(make_pair(nx,ny));
                graph[nx][ny] = 0;
              }
            }
          }

          ans++;
        }
      }
    }

    cout << ans << "\n";
  }
}