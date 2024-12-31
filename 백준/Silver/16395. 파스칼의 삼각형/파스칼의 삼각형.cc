#include <bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;

  int dp[n+1][n+1];

  dp[1][1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i][1] = 1;
    dp[i][i] = 1;

    for (int j = 2; j < i; j++)
      dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
  }
  
  cout << dp[n][k];
}
