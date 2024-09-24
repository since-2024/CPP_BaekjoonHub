#include <bits/stdc++.h>
#define fi first;
#define se second;
using namespace std;

int n, a, b;
int dp[5001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  dp[3] = 1;
  dp[5] = 1;
  
  for (int i = 6; i <= n; i++)
  {
    if (dp[i-3] != 0)
      dp[i] = dp[i-3] + 1;
    if (dp[i-5] != 0)
      dp[i] = dp[i-5] + 1;
  }
  
  if (dp[n] == 0)
    cout << -1;
  else
    cout << dp[n];
}