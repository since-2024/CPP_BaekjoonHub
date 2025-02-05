#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int n, m, r, a, b, idx=1;
vector<int> graph[MAX];
int visited[MAX];


void bfs(int st)
{
  queue<int> q;
  
  q.push(st);
  visited[st] = idx++;
  
  while(!q.empty())
  {
    int k = q.front();
    q.pop();
    
    for (auto c : graph[k])
    {
      if (visited[c] == 0)
      {
        q.push(c);
        visited[c] = idx++;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m >> r;
  
  for (int i=0; i < m; i++)
  {
    cin >> a >> b;
    
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  
  for (int i=1; i<=n; i++)
    sort(graph[i].begin(), graph[i].end());
  
  bfs(r);
  
  for (int i=1; i<=n; i++)
    cout << visited[i] << "\n";
}