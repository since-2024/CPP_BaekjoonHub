#include <bits/stdc++.h>
using namespace std;

int n;

int dp[100001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i=1; i<=n; i++)
  {
    cin >> dp[i];

    if (dp[i] + dp[i-1] >= dp[i])
      dp[i] += dp[i-1];
  }

  cout << *max_element(dp + 1, dp + n + 1);
}