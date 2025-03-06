#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, m, r;
long long ans;
long long v[MAX];
vector<int> g[MAX];
queue<int> q;


void bfs()
{
  int ord = 2;

  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    
    for (auto nx : g[x])
    {
      if (v[nx] == 0)
      {
        q.push(nx);
        v[nx] = v[x] + 1;
        ans += v[x] * ord++;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> n >> m >> r;
  
  for(int i=0; i < m; i++)
  {
    cin >> a >> b;
    
    g[a].push_back(b);
    g[b].push_back(a);
  }
  
  for (int i=1; i <= n; i++)
    sort(g[i].begin(), g[i].end());
  
  q.push(r);
  v[r] = 1;
  bfs();
  
  cout << ans;
}