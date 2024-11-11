#include <bits/stdc++.h>
using namespace std;

int n, k, c;
int dp[101][100001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  
  for (int i = 1; i <= k; i++)
    dp[0][i] = (int)1e9;

  for (int i = 1; i <= n; i++)
  {
    cin >> c;
    
    for (int j = 1; j <= k; j++)
		{
			if (j - c >= 0)
				dp[i][j] = min(dp[i-1][j], dp[i-1][j-c] + 1);
			else
				dp[i][j] = dp[i-1][j];
		}
  }

  if (dp[n][k] == (int)1e9)
    cout << -1;
  else
    cout << dp[n][k];
}