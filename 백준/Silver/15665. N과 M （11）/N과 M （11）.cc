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
  
  int last = 0;
  for (int i=0; i<n; i++)
  {
    if (last != arr[i])
    {
      last = arr[i];
      ans[idx] = arr[i];
      dfs(idx+1);
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