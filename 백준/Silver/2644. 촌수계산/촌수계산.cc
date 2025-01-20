#include <bits/stdc++.h>
using namespace std;
#define MAX 101

int n, t1, t2, m, x, y;
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
  
  cin >> n;
  cin >> t1 >> t2;
  cin >> m;
  
  for (int i=0; i<m; i++)
  {
    cin >> x >> y;
    
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  
  dfs(t1, 1);
  
  cout << visited[t2]-1;
}