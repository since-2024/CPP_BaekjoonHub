#include <bits/stdc++.h>
using namespace std;

int n, k;
long long dp[101];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  int v[n];
  
  for (int i = 0; i < n; i++)
    cin >> v[i];
  
  k = *max_element(v, v+n);
  
  dp[1] = dp[2] = dp[3] = 1;
  dp[4] = dp[5] = 2;
  
  for (int i = 6; i <= k; i++)
    dp[i] = dp[i-5] + dp[i-1];
  
  for (auto a : v)
    cout << dp[a] << "\n";
}