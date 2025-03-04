#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int n, m, a, b;
int v[MAX];
vector<int> g[MAX];
queue<int> q;


void bfs()
{
  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    
    if (x == b)
      break;
    
    for (auto nx : g[x])
    {
      if (v[nx] == 0)
      {
        q.push(nx);
        v[nx] = v[x] + 1;
      }
    }
  }
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ta, tb;
  cin >> a >> b >> n >> m;
  
  for(int i=0; i < m; i++)
  {
    cin >> ta >> tb;
    
    g[ta].push_back(tb);
    g[tb].push_back(ta);
  }
  
  q.push(a);
  v[a] = 1;
  bfs();
  
  cout << v[b] - 1;
}