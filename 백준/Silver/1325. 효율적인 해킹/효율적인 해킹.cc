#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int n, m, x, y, maxCnt, cnt;
vector<int> graph[MAX], ans;
bool visited[MAX];


void ResetVisit()
{
  for (int i=1; i<=n; i++)
    visited[i] = false;
}

void CheckMax(int k)
{
  if (maxCnt == cnt)
    ans.push_back(k);
  else if (maxCnt < cnt)
  {
    maxCnt = cnt;
    ans.clear();
    
    ans.push_back(k);
  }
}

void dfs(int k)
{
  visited[k] = true;
  cnt++;
  
  for (auto i : graph[k])
  {
    if (!visited[i])
      dfs(i);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i=0; i<m; i++)
  {
    cin >> x >> y;
    graph[y].push_back(x);
  }
  
  for (int i=1; i<=n; i++)
  {
    ResetVisit();
    cnt = 0;
    
    dfs(i);
    
    CheckMax(i);
  }
  
  for (auto c: ans)
    cout << c << " ";
}