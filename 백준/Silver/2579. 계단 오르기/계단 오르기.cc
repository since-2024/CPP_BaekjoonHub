#include <bits/stdc++.h>
using namespace std;

#define MAX 301

int n;

vector<int> dp(MAX, 0);
vector<int> val(MAX, 0);

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> val[i];

  dp[1] = val[1];
  dp[2] = val[1] + val[2];
  dp[3] = max(val[1], val[2]) + val[3];

  for (int i = 4; i <= n; i++)
    dp[i] = max(dp[i-3] + val[i-1], dp[i-2]) + val[i];

  cout << dp[n];
}