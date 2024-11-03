#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int n, m;
int dp[1001][1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i = 1; i <= m; i++)
    dp[1][i] = 1;

  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      dp[i][j] = ((dp[i][j-1] + dp[i-1][j-1]) % MOD + dp[i-1][j]) % MOD;
    }
  }

  cout << dp[n][m];
}