#include <bits/stdc++.h>
#define MOD 1000000000
using namespace std;

int n, ans;
int dp[101][10];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 1; i <= 9; i++)
    dp[1][i] = 1;
  
  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j <= 9; j++)
      if (j == 0)
        dp[i][j] = dp[i-1][1];
      else if (j == 9)
        dp[i][j] = dp[i-1][8];
      else
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD;
  }
  
  for (auto c : dp[n])
    ans = (ans + c) % MOD;
  
  cout << ans;
}