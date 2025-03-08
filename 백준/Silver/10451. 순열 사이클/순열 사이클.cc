#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int g[MAX];
bool v[MAX];

void dfs(int x)
{
  v[x] = true;

  if (!v[g[x]])
  {
    dfs(g[x]);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;

  cin >> t;

  while (t--)
  {
    int n, cnt = 0;

    cin >> n;

    fill_n(g, n+1, 0);
    fill_n(v, n+1, false);

    for (int i=1; i <= n; i++)
      cin >> g[i];

    for (int i=1; i <= n; i++)
    {
      if (!v[i])
      {
        dfs(i);
        cnt++;
      }
    }

    cout << cnt << "\n";
  }
}