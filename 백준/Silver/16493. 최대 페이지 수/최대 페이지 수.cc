#include <bits/stdc++.h>
using namespace std;

int n, m, w, v;
int dp[21][201];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i = 1; i<=m; i++)
  {
    cin >> w >> v;
    
    for (int j = 1; j<=n; j++)
    {
      if (j >= w)
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + v);
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  
  cout << dp[m][n];
}