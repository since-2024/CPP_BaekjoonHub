#include <bits/stdc++.h>
using namespace std;

int n;
int dp[10001];
int w[10001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i=1; i<=n; i++)
    cin >> w[i];
  
  dp[1] = w[1];
  dp[2] = w[1] + w[2];
  
  for (int i = 3; i <= n; i++)
    dp[i] = max({dp[i-3] + w[i-1] + w[i], dp[i-2] + w[i], dp[i-1]});
  
  cout << dp[n];
}