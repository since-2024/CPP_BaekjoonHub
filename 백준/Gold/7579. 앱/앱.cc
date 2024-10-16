#include <bits/stdc++.h>
using namespace std;

int n, m, sum;
int W[101], V[101];
int dp[101][10001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  for (int i = 1; i<=n; i++)
    cin >> W[i];
  
  for (int i = 1; i<=n; i++)
  {
    cin >> V[i];
    sum += V[i];
  }
  
  for (int i=1; i<=n; i++)
  {
    for (int j=0; j<=sum; j++)
    {
      if (j >= V[i])
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-V[i]] + W[i]);
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  
  for (int i=0; i<=sum; i++)
    if (dp[n][i] >= m)
    {
      cout << i;
      break;
    }
}