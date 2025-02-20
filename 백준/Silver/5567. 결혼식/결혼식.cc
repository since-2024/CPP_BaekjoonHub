#include <bits/stdc++.h>
using namespace std;

#define MAX 501

int n, m, ans, a, b;
vector<int> graph[MAX];
int v[MAX];
queue<int> q;


int bfs()
{
  int ret = 0;
  
  while (!q.empty())
  {
    int k = q.front();
    q.pop();
    
    if (v[k] > 2)
      continue;
    
    for (auto c : graph[k])
    {
      if (v[c] == 0)
      {
        q.push(c);
        v[c] = v[k] + 1;
        ret++;
      }
    }
  }
  
  return ret;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i=0; i < m; i++)
  {
    cin >> a >> b;
    
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  
  q.push(1);
  v[1] = 1;
  
  ans = bfs();
  
  cout << ans;
}