#include <bits/stdc++.h>
#define MOD 9901
using namespace std;

int n;
int dp[100001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  dp[0] = 1;
  dp[1] = 3;
  
  for (int i = 2; i <= n; i++)
    dp[i] = (dp[i-2] + (dp[i-1] * 2 )) % MOD;
  
  cout << dp[n];
}