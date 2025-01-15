#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int n, m, r, x, y, cnt=1;
vector<int> graph[MAX];
int ans[MAX];
bool visited[MAX];


void dfs(int k)
{
  visited[k] = true;
  ans[k] = cnt++;
  
  for (auto i : graph[k])
  {
    if (!visited[i])
      dfs(i);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m >> r;
  
  for (int i=0; i<m; i++)
  {
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  
  for (int i=1; i<=n; i++)
    sort(graph[i].rbegin(), graph[i].rend());
  
  dfs(r);
  
  for (int i=1; i<=n; i++)
    cout << ans[i] << "\n";
  
}