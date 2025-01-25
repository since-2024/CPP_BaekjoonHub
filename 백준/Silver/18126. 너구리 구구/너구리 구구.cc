#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MAX 5001

int n, x, y, v, ans;
vector<pair<int, int>> graph[MAX];

long long dfs(int k, int val)
{
  long long ret = 0;

  for (auto c : graph[k])
  {
    if (c.fi != val)
      ret = max(ret, dfs(c.fi, k) + c.second);
  }

  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i=0; i < n-1; i++)
  {
    cin >> x >> y >> v;

    graph[x].push_back(make_pair(y, v));
    graph[y].push_back(make_pair(x, v));
  }

  cout << dfs(1, 0);
}