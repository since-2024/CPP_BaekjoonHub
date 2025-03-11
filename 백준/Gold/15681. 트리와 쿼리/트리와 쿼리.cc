#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, r, q, a, b;
vector<int> g[MAX];
int ans[MAX];
bool v[MAX];


void dfs(int x, int p)
{
  v[x] = true;
  
  for (auto nx : g[x])
  {
    if (v[nx])
      continue;
    
    dfs(nx, x);
  }
  
  ans[p] += ans[x];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> r >> q;
  
  fill(ans, ans+n+1, 1);
  
  while (--n)
  {
    cin >> a >> b;
    
    g[a].push_back(b);
    g[b].push_back(a);
  }
  
  dfs(r, 0);
  
  while (q--)
  {
    cin >> a;
    
    cout << ans[a] << "\n";
  }
}