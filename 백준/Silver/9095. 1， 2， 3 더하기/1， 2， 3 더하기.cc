#include <bits/stdc++.h>
using namespace std;

int n, t;
int dp[12];

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

    for (int i=3; i<=n; i++)
      dp[i] = dp[i-3] + dp[i-2] + dp[i-1];

    cout << dp[n] << "\n";
  }
}