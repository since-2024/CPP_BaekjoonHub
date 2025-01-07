#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8], ans[8];
bool visited[8];


void dfs(int idx)
{
  if (idx == m)
  {
    for (int i=0; i<m; i++)
      cout << ans[i] << " ";
    cout << "\n";
    
    return;
  }
  
  for (int i=0; i<n; i++)
  {
    if (!visited[i])
    {
      visited[i] = true;
      ans[idx] = arr[i];
      dfs(idx+1);
      visited[i] = false;
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  for (int i=0; i<n; i++)
    cin >> arr[i];
  
  sort(arr, arr+n);
  
  dfs(0);
}