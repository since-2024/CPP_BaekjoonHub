#include <bits/stdc++.h>
using namespace std;

int n;
int dp[21][100];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  int W[n], V[n];
  
  for (int i = 0; i<n; i++)
    cin >> W[i];
  
  for (int i = 0; i<n; i++)
    cin >> V[i];
  
  for (int i = 0; i<n; i++)
  {
    for (int j=0; j<=99; j++)
    {
      if (j >= W[i])
        dp[i+1][j] = max(dp[i][j], dp[i][j-W[i]] + V[i]);
      else
        dp[i+1][j] = dp[i][j];
    }
  }
  
  cout << dp[n][99];
}