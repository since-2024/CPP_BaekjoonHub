#include <bits/stdc++.h>
using namespace std;

int n, k, l, s, ans;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  vector<vector<int>> v(n+1);
  
  for (int i = 0; i < n; i++)
  {
    cin >> k >> l;
    
    v[l].push_back(k);
  }
  
  for (int i = 1; i <= n; i++)
  {
    s = v[i].size();
    
    if (s > 0)
    {
      sort(v[i].begin(), v[i].end());
    
      ans += v[i][1] - v[i][0];
      ans += v[i][s-1] - v[i][s-2];
    }
    
    if (s > 2)
    {
      for (int j = 1; j < s-1; j++)
      {
        int x1 = v[i][j+1] - v[i][j];
        int x2 = v[i][j] - v[i][j-1];
      
        ans += min(x1, x2);
      }
    }
  }
  
  cout << ans;
}