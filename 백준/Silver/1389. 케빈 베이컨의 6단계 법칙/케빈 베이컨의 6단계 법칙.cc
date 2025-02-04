#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int n, m, a, b, t, ans, mc=1e9;
vector<int> graph[MAX];
queue<pair<int,int>> q;
int visited[MAX];


int con_sum(int k)
{
  int ret = 0;
  
  for (int i=1; i<=n; i++)
    visited[i] = 0;
  
  visited[k] = 1;
  q.push(make_pair(k,1));
  
  while(!q.empty())
  {
    int idx = q.front().first;
    int cnt = q.front().second;
    q.pop();
    
    for (auto c : graph[idx])
    {
      if (visited[c] == 0)
      {
        visited[c] = cnt;
        q.push(make_pair(c, cnt+1));
      }
    }
  }
  
  for (int i=1; i<=n; i++)
    ret += visited[i];
  
  return ret;
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
    t = con_sum(i);
    
    if (t < mc)
    {
      mc = t;
      ans = i;
    }
  }
  
  cout << ans;
}