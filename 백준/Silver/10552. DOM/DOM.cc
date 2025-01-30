#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, m, p, a, b, ans;
vector<int> graph[MAX];
bool visited[MAX];


int dfs(int k)
{
  int ret;
  visited[k] = true;
  ans++;

  if (graph[k].size() > 0)
  {
    int c = graph[k].front();
    ret = visited[c] ? 0 : dfs(c);
  }
  else
  {
    ret = ans;
  }

  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> p;

  for (int i=0; i < n; i++)
  {
    cin >> a >> b;

    graph[b].push_back(a);
  }

  ans = dfs(p);
  
  cout << ans-1;
}