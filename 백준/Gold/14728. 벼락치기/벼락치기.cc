#include <bits/stdc++.h>
using namespace std;

int n, t, w, v;
int dp[101][10001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> t;
  
  for (int i = 1; i<=n; i++)
  {
    cin >> w >> v;
    
    for (int j = 1; j <= t; j++)
      if (j>=w)
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + v);
      else
        dp[i][j] = dp[i-1][j];
  }
  
  cout << dp[n][t];
}