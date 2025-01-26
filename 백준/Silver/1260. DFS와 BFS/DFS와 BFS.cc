#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int n, m, v, x, y;
vector<int> graph[MAX];
bool visited[MAX];

void bfs(int idx)
{
  queue<int> q;
  q.push(idx);
  visited[idx] = true;
  
  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    cout << x << " ";
    
    for (auto c : graph[x])
    {
      if (!visited[c])
      {
        visited[c] = true;
        q.push(c);
      } 
    }
  }
}

void dfs(int idx)
{
  visited[idx] = true;
  cout << idx << " ";

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

  cin >> n >> m >> v;

  for (int i=0; i < m; i++)
  {
    cin >> x >> y;

    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  for (int i=1; i <= n; i++)
    sort(graph[i].begin(), graph[i].end());

  dfs(v);
  cout << "\n";

  for (int i=1; i <= n; i++)
    visited[i] = false;
  
  bfs(v);
}