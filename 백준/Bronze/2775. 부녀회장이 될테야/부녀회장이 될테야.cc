#include <bits/stdc++.h>
#define first fi
#define second se
using namespace std;

int n, k, t;
int dp[15][15];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  for (int i = 1; i<=14; i++)
    dp[0][i] = i;
  
  while (t--)
  {
    cin >> k >> n;
    
    for (int i = 1; i <= k; i++)
    {
      for (int j = 1; j <= n; j++)
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
    
    cout << dp[k][n] << "\n";
  }
}