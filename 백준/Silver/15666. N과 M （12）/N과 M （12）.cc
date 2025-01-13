#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8], ans[8];
bool visited[8];


void dfs(int num, int idx)
{
  if (idx == m)
  {
    for (int i=0; i<m; i++)
      cout << ans[i] << " ";
    cout << "\n";
    
    return;
  }
  
  int last = 0;
  for (int i=num; i<n; i++)
  {
    if (last != arr[i])
    {
      visited[i] = true;
      last = arr[i];
      ans[idx] = arr[i];
      dfs(i, idx+1);
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
  
  dfs(0, 0);
}