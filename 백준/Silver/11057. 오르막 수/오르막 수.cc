#include <bits/stdc++.h>
#define MOD 10007
using namespace std;

int n, k, ans;
int dp[1001][10];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 0; i < 10; i++)
    dp[0][i] = 1;
  
  for (int i = 1; i < n; i++)
  {
    k = 0;
    for (int j = 0; j <= 9; j++)
    {
      k += dp[i-1][j];
      
      dp[i][j] = k % MOD;
    }
  }
  
  for (auto c : dp[n-1])
    ans += c;
  
  cout << ans % MOD;
}