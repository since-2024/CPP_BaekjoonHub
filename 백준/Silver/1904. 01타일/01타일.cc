#include <bits/stdc++.h>
#define MOD 15746
using namespace std;

int n;
int dp[1000001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  dp[0] = dp[1] = 1;
  dp[2] = 2;
  
  for (int i = 3; i <= n; i++)
    dp[i] = (dp[i-2] + dp[i-1]) % MOD;
  
  cout << dp[n];
}