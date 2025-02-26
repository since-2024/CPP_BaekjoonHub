#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int n, m, ans;
vector<pair<int,int>> graph[MAX];
bool v[MAX];


void init_v()
{
  for (int i=0; i<n; i++)
    v[i] = false;
}

int bfs(int s, int e)
{
  queue<pair<int,int>> q;
  q.push(make_pair(s,0));
  v[s] = true;
  
  while (!q.empty())
  {
    int node = q.front().first;
    int val = q.front().second;
    q.pop();
    
    if (node == e)
      return val;
    
    for (auto c : graph[node])
    {
      int nn = c.first;
      int nv = c.second;
      
      if (!v[nn])
      {
        q.push(make_pair(nn,val + nv));
        v[nn] = true;
      }
    }
  }
  
  return -1;
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  int a, b, c;
  
  for (int i=0; i < n-1; i++)
  {
    cin >> a >> b >> c;
    
    graph[a-1].push_back(make_pair(b-1,c));
    graph[b-1].push_back(make_pair(a-1,c));
  }
  
  for (int i=0; i < m; i++)
  {
    init_v();
    
    cin >> a >> b;
    
    ans = bfs(a-1, b-1);
    cout << ans << "\n";
  }
}