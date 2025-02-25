#include <bits/stdc++.h>
using namespace std;

int n, m;
int dp[1001][1001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> dp[i][j];
      dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
    }
  }

  cout << dp[n][m];
}