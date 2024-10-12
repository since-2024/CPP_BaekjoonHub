#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000009;
int n, t, m = 2;
long long dp[1000001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  
  while (t--)
  {
    cin >> n;
    
    if (n > m)
    {
      for (int i = m+1; i<=n; i++)
      {
        dp[i] = (dp[i-3] + dp[i-2] + dp[i-1]) % MOD;
      }
      
      m = n;
    }
    
    cout << dp[n] << "\n";
  }
}