#include <bits/stdc++.h>
using namespace std;

#define MAX 300001

int n, m, k, x, a, b;
vector<int> graph[MAX], ans;
int v[MAX];
queue<int> q;


void bfs()
{
  while (!q.empty())
  {
    int p = q.front();
    q.pop();
    
    for (auto c : graph[p])
    {
      if (v[c] > 0)
        continue;
      
      v[c] = v[p] + 1;
      
      if (v[p] == k)
        ans.push_back(c);
      else
        q.push(c);
    }
  }
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> k >> x;
  
  for (int i=0; i < m; i++)
  {
    cin >> a >> b;
    graph[a].push_back(b);
  }
  
  q.push(x);
  v[x] = 1;
  
  bfs();
  
  if (ans.empty())
    cout << "-1";
  else
  {
    sort(ans.begin(), ans.end());
    
    for (auto c : ans)
      cout << c << "\n";
  }
}