#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, a, b;
vector<int> graph[MAX];
int visited[MAX];


void dfs(int idx)
{
  for (auto c : graph[idx])
  {
    if (visited[c] == 0)
    {
      visited[c] = idx;
      dfs(c);
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i=1; i<n; i++)
  {
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  visited[1] = -1;
  dfs(1);

  for (int i=2; i <= n; i++)
    cout << visited[i] << "\n";
}