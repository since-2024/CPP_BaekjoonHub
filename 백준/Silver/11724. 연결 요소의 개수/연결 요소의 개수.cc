#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int n, m, a, b, ans;
vector<int> graph[MAX];
bool visited[MAX];

void dfs(int idx)
{
  visited[idx] = true;

  for (auto c : graph[idx])
  {
    if (!visited[c])
      dfs(c);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;

  for (int i=0; i<m; i++)
  {
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i=1; i<=n; i++)
  {
    if (!visited[i])
    {
      dfs(i);
      ans++;
    }
  }

  cout << ans;

}