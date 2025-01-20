#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int n, m, r, x, y;
vector<int> graph[MAX];
int visited[MAX];


void dfs(int k, int idx)
{
  visited[k] = idx;
  
  for (auto i : graph[k])
  {
    if (visited[i] == 0)
      dfs(i, idx+1);
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
    sort(graph[i].begin(), graph[i].end());
  
  dfs(r, 1);
  
  for (int i=1; i<=n; i++)
    cout << visited[i]-1 << "\n";
}