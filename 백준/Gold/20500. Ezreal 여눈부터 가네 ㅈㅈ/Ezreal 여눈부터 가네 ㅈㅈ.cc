#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int n;
int dp[1515][3];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  dp[2][0] = dp[2][1] = 1;
  
  for (int i = 3; i <= n; i++)
  {
    dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % MOD;
    dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % MOD;
    dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % MOD;
  }
  
  cout << dp[n][0];
}